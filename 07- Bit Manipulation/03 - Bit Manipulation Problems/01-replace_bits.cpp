#include <iostream>

using namespace std;

void clearBitsInRange(int &n, int i, int j) {
  int mask1 = -1 << (j + 2);
  int mask2 = (1 << i) - 1;
  int mask = mask1 | mask2;
  n = n & mask;
}

void replaceBits(int &n, int m, int i, int j) {
  clearBitsInRange(n, i, j);
  int mask = m << i;
  n = n | mask;
}

int main() {

  int n = 15; // 00001111
  int m = 2;  // 00000010
  int i = 1;  // (starting from right)
  int j = 3;  // (ending from right)

  replaceBits(n, m, i, j);

  cout << n << endl;

  return 0;
}