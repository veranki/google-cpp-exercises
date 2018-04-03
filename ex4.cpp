#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
  srand(time(NULL));
  int rand_no = rand() % 100 + 1;
  int guess = 0;
  cout << "Enter a number to guess the Secret Number (1 to 100)\n";
  do
  {
    if (!(cin >> guess))
    {
      cout << "you have entered a non-numeric. Exiting..." << endl;
      cin.clear();
      cin.ignore('\n');
      // break;
      //exit the do-while loop
    }
    if (guess > rand_no)
      cout << "that's too high \n";
    else if (guess < rand_no)
      cout << "that's too low \n";
  } while (guess != rand_no);
  cout << "Great! You guessed it right. \n";
  return 0;
}
