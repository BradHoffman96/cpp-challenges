#include <iostream>
#include <cstdlib>

// Write a program that will, given two or more positive integers, calculate and print
// The Least Common Multiple of them all.

using namespace std;

int gcd(int larger, int smaller) {
  int remainder = larger % smaller;
  if (remainder == 0) {
    return smaller;
  } else {
    return gcd(smaller, remainder);
  }
}

int lcm(int larger, int smaller, int gcd_result) {
  int result = abs(larger) / gcd_result;
  result *= smaller;

  return result;
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

  int gcd_result = gcd(larger_num, smaller_num);
  int lcm_result = lcm(larger_num, smaller_num, gcd_result);

  cout << "LCM: " << lcm_result << endl;

  return 0;
}
