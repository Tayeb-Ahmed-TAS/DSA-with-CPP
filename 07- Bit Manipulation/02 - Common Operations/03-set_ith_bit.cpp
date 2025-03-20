#include <iostream>

using namespace std;

void setIthBit(int &n, int i) {
  int mask = (1 << i);
  n = n | mask; // Set the ith bit to 1
}

int main() {

  int n = 5; // 00000101
  int i;     // Position of the bit
  cout << "Enter the position: ";
  cin >> i;

  setIthBit(n, i);
  cout << n; // new number

  return 0;
}