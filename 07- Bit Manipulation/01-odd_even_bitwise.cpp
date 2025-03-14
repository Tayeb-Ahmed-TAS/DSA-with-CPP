// Write a function (or, an expression) to check if a number is odd or even

#include <iostream>

using namespace std;

int main() {

  int number;
  cout << "Enter an integer: ";
  cin >> number;

  if (number & 1) { // number & 1 condition is used to find out the last bit
    cout << "Odd";
  } else {
    cout << "Even";
  }

  return 0;
}

// Explanation

/*
      5 = 0 0 0 0 0 1 0 1
    & 1 = 0 0 0 0 0 0 0 1
    ---------------------
          0 0 0 0 0 0 0 1

The last bit of the result is 1. So, the number is odd.

Same ways,

          6 = 0 0 0 0 0 1 1 0
        & 1 = 0 0 0 0 0 0 0 1
        ---------------------
              0 0 0 0 0 0 0 0

The last bit of the result is 0. So, the number is even.

*/