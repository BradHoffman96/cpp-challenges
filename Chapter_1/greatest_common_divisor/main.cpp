#include <iostream>

// Write a program that calculates and prints the sum of all the natural numbers divisble by either 3 or 5,
// Up to a given limit entered by the user.

using namespace std;

int main() {
  
  cout << "This program will find the Greatest Common Divisor of 2 numbers.\n";

  cout << "Please enter the first number: ";
  int number_one;
  cin >> number_one;

  cout << "Please enter the second number: ";
  int number_two;
  cin >> number_two;

  int smaller_num;
  if (number_one <= number_two) {
    smaller_num = number_one;
  } else {
    smaller_num = number_two;
  }

  int gcd = 1;
  for (int i = 1; i <= smaller_num; i++) {
    if (number_one % i == 0 && number_two % i == 0) {
      gcd = i;
    }
  }

  cout << "GCD: " << gcd << endl;

  return 0;
}
