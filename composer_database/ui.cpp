#include <iostream>
#include "Database.h"
using namespace std;

int main() {
  cout << "Composer Database" << endl;
  cout << "1) Add a new composer" << endl;
  cout << "2) Retrieve a composer's data" << endl;
  cout << "3) Promote/demote a composer's rank" << endl;
  cout << "4) List all composers" << endl;
  cout << "5) List all composers by rank" << endl;
  cout << "0) Quit" << endl;
  int choice;
  do {
    cout << "Enter your choice" << endl;
    cin >> choice;
    switch (choice) {
      case 1:
        cout << "Your choice: Add a new composer" << endl;
      case 2:
        cout << "Your choice: Retrieve a composer's data" << endl;
      case 3:
        cout << "Your choice: Promote/demote a composer's rank" << endl;
      case 4:
        cout << "Your choice: List all composers" << endl;
      case 5:
        cout << "Your choice: List all composers by rank" << endl;
      case 0:
        cout << "You have quit" << endl;
    }
  } while (choice != 0);
  return 0;
}
