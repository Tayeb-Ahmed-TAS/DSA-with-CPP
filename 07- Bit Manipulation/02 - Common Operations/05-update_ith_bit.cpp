#include <iostream>

using namespace std;

void clearIthBit(int &n, int i) {
  int mask = ~(1 << i);
  n = n & mask;
}

void updateIthBit(int &n, int i, int v) {
  clearIthBit(n, i);
  int mask = v << i;
  n = n | mask;
}

int main() {

  int n = 13; // 00001101
  int i;      // position of the bit to be updated
  int v;      // value to be updated

  cout << "Enter the position of the bit to be updated: ";
  cin >> i;

  cout << "Enter the value to be updated: ";
  cin >> v;

  updateIthBit(n, i, v);

  cout << "The updated number is: " << n << endl;

  return 0;
}