#include <iostream>

using namespace std;

void clearIthBit(int &n, int i) {
  int mask = ~(1 << i);
  n = n & mask; // Clear the ith bit to 0
}

int main() {

  int n = 13; // 00001101
  int i;
  cout << "Enter the position: ";
  cin >> i;

  clearIthBit(n, i);
  cout << n << endl; // New number

  return 0;
}