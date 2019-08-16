#include <iostream>

// Write a program that computers and prints the largest prime number that is smaller
// Than a number provider by the user, which must be a positive integer.

using namespace std;

int findLargestPrime(int limit) {
  for (int i = limit; i >= 3; i--) {
    if (i % 6 == 1 || i % 6 == 5) {
      return i;
    }
  }

  return 0;
}

int main() {
  cout << "This program will find the largest prime smaller than a given number.\n";

  cout << "Please enter your number: ";
  int limit;
  cin >> limit;

  if (limit <= 0) {
    cout << "\nPlease enter a number greater than 0." << endl;
    //TODO: Make this a loop for better performance.
  } else if (limit == 1) {
    cout << "There is no positive prime number smaller than 1." << endl;
  } else if (limit == 2) {
    cout << "1" << endl;
  } else if (limit == 3) {
    cout << "2" << endl;
  } else {
    if (auto result = findLargestPrime(limit); result != 0) {
      cout << result << endl;
    } else {
      cout << "Could not find a prime smaller than limit." << endl;
    }
  }

  return 0;
}
