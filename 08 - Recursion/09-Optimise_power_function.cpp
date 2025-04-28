// Write a function to find the power of a number, both number & power are given
// as input.

#include <iostream>

using namespace std;

int fastPower(int a, int n) {
  // Base Case
  if (n == 0) {
    return 1; // a ^ 0 = 1
  }

  // Recursive Case

  int subProblem = fastPower(a, n / 2); // a^(n/2)

  int subProblemSquare = subProblem * subProblem; // (a^(n/2))^2

  if (n & 1) { // if n is odd. (Checking the last set bit)

    return a * subProblemSquare; // a^(n) = a * (a^(n/2))^2}
  }

  return subProblemSquare; // if n is even. // a^(n) = (a^(n/2))^2}
}

int main() {

  int a, n;
  cout << "Base = ";
  cin >> a;
  cout << "Power = ";
  cin >> n;

  cout << "Result = " << fastPower(a, n) << endl;

  return 0;
}