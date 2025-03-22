//  Write a function that takes an integer and returns the number of bits that
//  are set to 1 in its binary representation.

#include <iostream>

using namespace std;

int count_bits_hack(int n) {
  int count = 0;

  while (n > 0) {
    n = n & (n - 1);
    count++;
  }
  return count;
}

int main() {

  int n;
  cout << "Enter the number: ";
  cin >> n;

  cout << "Number of set bits: " << count_bits_hack(n) << endl;

  return 0;
}

// Note: It is the faster way to count the number of set bits in a number.
// It is also known as Brian Kernighan's Algorithm.