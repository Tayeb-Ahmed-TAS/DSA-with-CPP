#include <iostream>

using namespace std;

void clearLastIBits(int &n, int i) {
  int mask = (-1 << i);
  n = n & mask;
}

int main() {

  int n = 13; // 00001101
  int i;
  cout << "How many bits to clear from the end: ";
  cin >> i;

  clearLastIBits(n, i);

  cout << n << endl;

  return 0;
}