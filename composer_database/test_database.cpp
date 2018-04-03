#include <iostream>
#include "Database.h"
using namespace std;
int main() {
  Database myDB;
  // Remember that AddComposer returns a reference to the new record.
  Composer& comp1 =
      myDB.AddComposer("Ludwig van", "Beethoven", "Romantic", 1770,
                       "Beethoven was completely deaf during the latter part "
                       "of his life - he never "
                       "heard a performance of his 9th symphony.");
  //   myDB.GetComposer("Beethoven").set_ranking(50);
  //   comp1.set_ranking(50);
  comp1.Promote(7);
  //   cout << comp1.get_ranking() << endl;
  //   cout << myDB.GetComposer("Beethoven").get_ranking() << endl;

  Composer& comp2 = myDB.AddComposer(
      "Johann Sebastian", "Bach", "Baroque", 1685,
      "Bach had 20 children, several of whom became famous musicians as well.");
  comp2.Promote(5);
  //   comp2.Display() << endl;
  //   cout << myDB.GetComposer("Bach").get_fact << endl;

  Composer& comp3 =
      myDB.AddComposer("Wolfgang Amadeus", "Mozart", "Classical", 1756,
                       "Mozart feared for his life during his last year - "
                       "there is some evidence "
                       "that he was poisoned.");
  comp3.Promote(2);

  Composer& comp4 =
      myDB.AddComposer("Wolfgang Amadeus", "Mozart", "Classical", 1756,
                       "Mozart feared for his life during his last year - "
                       "there is some evidence "
                       "that he was poisoned.");
  comp4.Promote(100);

  Composer& comp5 =
      myDB.AddComposer("Wolfgang Amadeus", "Mozart", "Classical", 1756,
                       "Mozart feared for his life during his last year - "
                       "there is some evidence "
                       "that he was poisoned.");
  comp5.Promote(1000);

  //   cout << myDB.GetComposer("Beethoven").get_first_name() << endl;
  //   cout << myDB.GetComposer("Bach").get_first_name() << endl;
  //   myDB.GetComposer("Bach").Display();
  //   cout << endl << "all Composers: " << endl;
  myDB.DisplayAll();
  myDB.DisplayByRank();
  return 0;
}
