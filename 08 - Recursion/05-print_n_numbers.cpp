// Print numbers from 1 to N using recursion in both increasing and decreasing
// order.

#include <iostream>

using namespace std;

void dec(int n) {
  if (n == 0) {
    return;
  }

  cout << n << " ";
  dec(n - 1);
}

void inc(int n) {
  if (n == 0) {
    return;
  }

  inc(n - 1);
  cout << n << " ";
}

int main() {

  int n;
  cout << "Enter how many numbers you want to print: ";
  cin >> n;

  cout << "Decreasing order: ";
  dec(n);

  cout << endl;

  cout << "Increasing order: ";
  inc(n);

  return 0;
}