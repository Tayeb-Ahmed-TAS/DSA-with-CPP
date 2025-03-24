#include <iostream>

using namespace std;

int fastExpo(int a, int n) {
  int ans = 1; // Initially ans is 1

  while (n > 0) {
    int last_bit = (n & 1); // Extracting the last bit of n
    if (last_bit) {         // If the last bit is set (1)
      ans = ans * a;        // Multiply ans with a
    }
    a = a * a;  // Square the value of a (Multiplying the previous power of a)
    n = n >> 1; // Right shifting n by 1
  }
  return ans;
}

int main() {

  int a, n;

  cin >> a >> n;

  cout << fastExpo(a, n) << endl;

  return 0;
}