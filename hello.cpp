// hello.cpp: v
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // set up cout to left align
  cout << setiosflags(ios::left);
  // for 6 rows
  for (int i = 0; i < 6; i++)
  {
    // for 4 columns
    for (int j = 0; j < 4; j++)
      // for width of column
      cout << setw(17) << "Hello World!";

    // starting new row
    cout << endl;
  }
  return 0;
}
