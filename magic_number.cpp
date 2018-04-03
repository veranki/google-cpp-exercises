#include <iostream>
using namespace std;
// const int test = 100;
// const int test2 = 200;
int reverse(int number) {
  int r_number = 0;
  // reverse = ((number % 100) % 10) * 100 + ((number % 100) / 10) * 10 +
  //           (number / 100) * 1;
  while (r_number != 0) {
    r_number = r_number % 10;
  }
  return r_number;
}

int main() {
  int i_no, r_no, o_no, diff, r_diff = 0;
  cout << "Enter a 3-digit number with first digit greater than last " << endl;
  cin >> i_no;
  r_no = reverse(i_no);
  // diff = i_no - r_no;
  // r_diff = reverse(diff);
  // o_no = diff + r_diff;
  cout << r_no << endl;
  // cout << test << endl;
  // int test2 = 300;
  // cout << test2 << endl;
  return 0;
}
