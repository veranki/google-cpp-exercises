#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char first_name[30], last_name[30];
  int age;
  char file_name[20];
  int input_var = 0;

  ////////////////////////////////////////
  // collect data
  ////////////////////////////////////////

  cout << "Enter the name of the file: ";
  cin >> file_name;

  // Create an ofstream object and optionally open file.
  ofstream People(file_name, ios::out);
  do {
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << "Enter Last Name: ";
    cin >> last_name;
    cout << "Enter Age: ";
    cin >> age;
    // Write the output to the sream.
    People << first_name << endl << last_name << endl << age << endl;
    cout << "Enter 1 to Continue & 0 to Stop" << endl;
    cin >> input_var;
  } while (input_var == 1);

  // Close stream
  People.close();

  ////////////////////////////////////////
  // display data
  ////////////////////////////////////////

  // create an ifsteram to read the
  ifstream People_in(file_name, ios::in);
  char line1[30], line2[30], line3[30];
  while (!People_in.eof()) {
    People_in >> line1 >> line2 >> line3;
    cout << line1 << endl;
    cout << line2 << endl;
    cout << line3 << endl;
    cout << endl;
  }

  // Close the stream
  People_in.close();
  return 0;
}
