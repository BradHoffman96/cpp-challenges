#include <iostream>

// Write a program that calculates and prints the sum of all the natural numbers divisble by either 3 or 5,
// Up to a given limit entered by the user.

int main() {
  
  std::cout << "This program will find all numbers divisible by 3 and 5 up to a limit.\n";
  std::cout << "Please enter a limit: ";

  int limit;
  std::cin >> limit;

  std::cout << limit << '\n';
}
