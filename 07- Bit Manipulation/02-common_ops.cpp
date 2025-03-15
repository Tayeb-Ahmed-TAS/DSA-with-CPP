#include <iostream>

using namespace std;

int getIthBit(int n, int i) {
  int mask = (1 << i); // Left shift 1 i times

  return (n & mask) > 0 ? 1 : 0;
}

int main() {

  int n = 5; // 00000101
  int i;     // Position of the bit
  cout << "Enter the position: ";
  cin >> i;

  cout << getIthBit(n, i);

  return 0;
}

// Bit position starts from 0 from right to left

// Position: 7 6 5 4 3 2 1 0
//      5 -> 0 0 0 0 0 1 0 1