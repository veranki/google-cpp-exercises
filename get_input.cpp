#include <iostream>
using namespace std;

// int main()
// {
//   int input_var = 0;
//   cout << "Enter a number";
//   if (!(cin >> input_var))
//   {
//     cout << "you entered " << (!input_var) << endl;
//     //exit the do-while loop
//   }
// }
// int main() {
//   int input_var = 0;
//   cout << "Enter a number " << endl;
//   if (!(cin >> input_var)) {
//     cout << "you have entered a incorrect type. Exiting..." << endl;
//     cout << input_var << endl;
//   } else {
//     cout << "you have entered a correct type. Exiting..." << endl;
//     cout << input_var << endl;
//   }
//   return 0;
// }
int main() {
  int input_var = 0;
  do {
    cout << "Enter a number(-1 = quit):";
    if (!(cin >> input_var)) {
      cout << "you have entered a non-numeric. Exiting..." << endl;
      cin.clear();
      cin.ignore('\n');
      // break;
      // exit the do-while loop
    }
    if (input_var != -1) {
      cout << "you entered" << input_var << endl;
    }
  } while (input_var != -1);
  cout << "All done." << endl;
  return 0;
}
