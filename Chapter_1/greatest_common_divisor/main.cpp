#include <iostream>

// Write a program that, given two positive integers, will calculate and print the 
// Greatest Common Divisor of the two.

using namespace std;

int gcd(int larger, int smaller) {
  int remainder = larger % smaller;
  if (remainder == 0) {
    return smaller;
  } else {
    return gcd(smaller, remainder);
  }
}

int main() {
  cout << "This program will find the Greatest Common Divisor of 2 numbers.\n";

  cout << "Please enter the first number: ";
  int number_one;
  cin >> number_one;

  cout << "Please enter the second number: ";
  int number_two;
  cin >> number_two;

  int smaller_num, larger_num;
  if (number_one <= number_two) {
    smaller_num = number_one;
    larger_num = number_two;
  } else {
    smaller_num = number_two;
    larger_num = number_one;
  }

  int result = gcd(larger_num, smaller_num);

  cout << "GCD: " << result << endl;

  return 0;
}
