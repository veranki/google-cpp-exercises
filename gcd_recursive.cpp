#include <iostream>
using namespace std;

// int gcd(int a, int b)
// {
//   int r = 0;
//   r = a % b;
//   if (r == 0)
//     return b;
//   else
//     return gcd(b, r);
// }

int gcd(int a, int b)
{
  if (a == b)
    return a;
  else if (a > b)
    return gcd(a - b, b);
  else if (a < b)
    return gcd(a, b - a);
  else
    return 0;
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
