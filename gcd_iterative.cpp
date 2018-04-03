#include <iostream>
using namespace std;
//// Without using Function
// int main()
// {
//   int num1, num2, rm = 0;
//   cout << "Enter two numbers whose GCD is to be found" << endl;
//   cin >> num1;
//   cin >> num2;
//   do
//   {
//     rm = num1 % num2;
//     num1 = num2;
//     num2 = rm;
//   } while (rm != 0);
//   cout << "GCD for the two numbers is " << num1 << endl;
//   return 0;
// }
int gcd(int a, int b)
{
  int r = 0;
  do
  {
    r = a % b;
    a = b;
    b = r;
  } while (r != 0);
  return a;
}

int main()
{
  int num1, num2, result = 0;
  cout << "Enter two numbers whose GCD is to be found" << endl;
  cin >> num1;
  cin >> num2;
  result = gcd(num1, num2);
  cout << "GCD for the two numbers is " << result << endl;
  return 0;
}
