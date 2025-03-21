// Write a function to determine if it is a power of two.

#include <iostream>

using namespace std;

int main() {

  int n;
  cout << "Enter a number: ";
  cin >> n;

  if ((n & (n - 1)) == 0) {
    cout << "Power of 2" << endl;
  } else {
    cout << "Not a power of 2" << endl;
  }

  return 0;
}