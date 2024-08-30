#include <iostream>

using namespace std;

int main() {

  int x = 10;

  int *xptr = &x;

  cout << *xptr << endl; // 10

  return 0;
}