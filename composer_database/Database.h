// database.h, Maggie Johnson
// Description: Class for a database of Composer records.
#include <iostream>
#include "Composer.h"

// Our database holds 100 composers, and no more.
const int kMaxComposers = 100;

class Database {
 public:
  Database() { next_slot_ = 0; };
  ~Database(){};

  // Add a new composer using operations in the Composer class.
  // For convenience, we return a reference (pointer) to the new record.
  Composer& AddComposer(string in_first_name, string in_last_name,
                        string in_genre, int in_yob, string in_fact) {
    // composers_[next_slot_].set_first_name(in_first_name);
    // composers_[next_slot_].set_last_name(in_last_name);
    // composers_[next_slot_].set_composer_genre(in_genre);
    // composers_[next_slot_].set_composer_yob(in_yob);
    // composers_[next_slot_].set_fact(in_fact);
    // next_slot_ += 1;
    // return composers_[next_slot_ - 1];
    Composer* newComposer = new Composer;
    newComposer->set_first_name(in_first_name);
    newComposer->set_last_name(in_last_name);
    newComposer->set_composer_genre(in_genre);
    newComposer->set_composer_yob(in_yob);
    newComposer->set_fact(in_fact);
    composers_[next_slot_] = *newComposer;
    next_slot_ += 1;
    // return *newComposer;
    return composers_[next_slot_ - 1];
  };

  // Search for a composer based on last name. Return a reference to the
  // found record.
  Composer& GetComposer(string in_last_name) {
    for (int i = 0; i < kMaxComposers - 1; i++) {
      if (composers_[i].get_last_name() == in_last_name) {
        return composers_[i];
      }
    }
  };

  // // Display all composers in the database.
  void DisplayAll() {
    for (int i = 0; i < kMaxComposers - 1; i++) {
      if (composers_[i].get_first_name() != "") composers_[i].Display();
    }
  };

  // Sort database records by rank and then display all.
  void DisplayByRank() {
    Composer compRank[kMaxComposers];
    // copy in to new array
    for (int i = 0; i < kMaxComposers - 1; i++) {
      compRank[i] = composers_[i];
    }
    // bubble sort
    Composer temp;
    int swapped = 1;
    for (int j = 0;
         (j < kMaxComposers) && swapped && compRank[j].get_first_name() != "";
         j++) {
      swapped = 0;
      for (int i = 0;
           (i < kMaxComposers - 1) && compRank[i].get_first_name() != ""; i++) {
        if (compRank[i].get_ranking() > compRank[i + 1].get_ranking()) {
          temp = compRank[i];
          compRank[i] = compRank[i + 1];
          compRank[i + 1] = temp;
          swapped = 1;
        };
      }
    }
    // print all wrt rank
    for (int i = 0; i < kMaxComposers - 1; i++) {
      if (compRank[i].get_first_name() != "") compRank[i].Display();
    }
  };

 private:
  // Store the individual records in an array.
  Composer composers_[kMaxComposers];
  // Track the next slot in the array to place a new record.
  int next_slot_;
};
