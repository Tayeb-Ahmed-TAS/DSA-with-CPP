#include <iostream>

using namespace std;

int main() {

  int x = 10;
  int &y = x;

  cout << "x: " << x << endl; // 10
  cout << "y: " << y << endl; // 10

  y++;

  cout << "x: " << x << endl; // 11
  cout << "y: " << y << endl; // 11

  x++;

  cout << "x: " << x << endl; // 12
  cout << "y: " << y << endl; // 12

  return 0;
}

// Because they are in the same bucket, they are pointing to the same memory
// location. So, if I change the value of x, y will also change. Again, if I
// change the value of y, x will also change. This is the concept of reference
// variables. They are just another name for the same memory location.