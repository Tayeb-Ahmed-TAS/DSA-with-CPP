// Write a function to find the power of a number, both number & power are given
// as input.

#include <iostream>

using namespace std;

int power(int a, int n) {
  // Base Case
  if (n == 0) {
    return 1; // a ^ 0 = 1
  }

  // Recursive Case
  return a * power(a, n - 1); // a * a ^ (n-1)
}

int main() {

  int a, n;
  cout << "Base = ";
  cin >> a;
  cout << "Power = ";
  cin >> n;

  cout << "Result = " << power(a, n) << endl;

  return 0;
}
