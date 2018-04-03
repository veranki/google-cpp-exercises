#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char first_name[30], last_name[30];
  int age;
  char file_name[20];
  // collect data
  cout << "Enter First Name: ";
  cin >> first_name;
  cout << "Enter Last Name: ";
  cin >> last_name;
  cout << "Enter Age: ";
  cin >> age;
  cout << endl << "Enter the name of the file: ";
  cin >> file_name;

  // Create an ofstream called people, open the stream for output.
  // Create an ifstream object and optionally open file.
  ofstream People(file_name, ios::out);
  // Write the output to the sream.
  People << first_name << endl << last_name << endl << age << endl;
  // Close stream
  People.close();
  // create an ifsteram to read the
  ifstream People_in(file_name, ios::in);
  char line1[30], line2[30], line3[30];
  People_in >> line1 >> line2 >> line3;
  //   cin.getline(line1, 256);
  cout << "line1 is " << line1 << endl;
  //   cin.getline(line2, 256);
  cout << "line1 is " << line2 << endl;
  //   cin.getline(line3, 256);
  cout << "line1 is " << line3 << endl;
  // Close the stream
  People_in.close();
  return 0;
}
