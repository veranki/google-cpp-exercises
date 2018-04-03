// composer.h, Maggie Johnson
// Description: The class for a Composer record.
// The default ranking is 10 which is the lowest possible.
// Notice we use const in C++ instead of #define.
using namespace std;
const int kDefaultRanking = 10;

class Composer {
 public:
  // Constructor
  Composer(){
      // std::cout << "\n Constructor called \n";
      // ranking_ = 0;
  };
  // Here is the destructor which has the same name as the class
  // and is preceded by ~. It is called when an object is destroyed
  // either by deletion, or when the object is on the stack and
  // the method ends.
  ~Composer(){
      // std::cout << "\n Destructor called \n";
  };

  // Accessors and Mutators
  void set_first_name(string in_first_name) { first_name_ = in_first_name; };
  string get_first_name() { return first_name_; };
  void set_last_name(string in_last_name) { last_name_ = in_last_name; };
  string get_last_name() { return last_name_; };
  void set_composer_yob(int in_composer_yob) {
    composer_yob_ = in_composer_yob;
  };
  int get_composer_yob() { return composer_yob_; };
  void set_composer_genre(string in_composer_genre) {
    composer_genre_ = in_composer_genre;
  };
  string get_composer_genre() { return composer_genre_; };
  void set_ranking(int in_ranking) { ranking_ = in_ranking; };
  int get_ranking() { return ranking_; };
  void set_fact(string in_fact) { fact_ = in_fact; };
  string get_fact() { return fact_; };
  void Display() {
    cout << "First Name: " << first_name_ << endl;
    cout << "Last Name: " << last_name_ << endl;
    cout << "YOB: " << composer_yob_ << endl;
    cout << "Rank: " << ranking_ << endl;
    cout << "Fact: " << fact_ << endl << endl;
  };
  // Methods
  // This method increases a composer's rank by increment.
  void Promote(int increment) { ranking_ = ranking_ + increment; };
  // This method decreases a composer's rank by decrement.
  void Demote(int decrement) { ranking_ = ranking_ - decrement; };
  // This method displays all the attributes of a composer.

 private:
  string first_name_;
  string last_name_;
  int composer_yob_;       // year of birth
  string composer_genre_;  // baroque, classical, romantic, etc.
  string fact_;
  int ranking_;
};
