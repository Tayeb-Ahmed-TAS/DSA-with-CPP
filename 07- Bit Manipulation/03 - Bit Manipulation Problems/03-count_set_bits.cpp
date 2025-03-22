//  Write a function that takes an integer and returns the number of bits that
//  are set to 1 in its binary representation.

#include <iostream>

using namespace std;

int count_bits(int n) {
  int count = 0;

  while (n > 0) {
    int last_bit = n & 1;
    count += last_bit;
    n = n >> 1;
  }
  return count;
}

int main() {

  int n;
  cout << "Enter the number: ";
  cin >> n;

  cout << "Number of set bits: " << count_bits(n) << endl;

  return 0;
}