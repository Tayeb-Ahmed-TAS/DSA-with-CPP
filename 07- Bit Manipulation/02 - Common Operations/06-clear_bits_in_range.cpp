#include <iostream>

using namespace std;

void clearBitsInRange(int &n, int i, int j) {
  int mask1 = (-1 << (j + 1));
  int mask2 = (1 << i) - 1;
  int mask = mask1 | mask2;

  n = n & mask;
}

int main() {

  int n = 13; // 00001101
  int i;
  int j;

  cout << "Enter the starting bit position: ";
  cin >> i;

  cout << "Enter the ending bit position: ";
  cin >> j;

  clearBitsInRange(n, i, j);

  cout << n << endl;

  return 0;
}