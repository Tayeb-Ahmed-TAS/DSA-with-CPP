#include <iostream>

using namespace std;

int main() {

  int x = 10;
  float y = 5.5;

  int *xptr;
  xptr = &x;

  cout << "xptr = " << xptr << endl;

  // Initialization of pointer

  float *yptr = &y;

  cout << "yptr = " << yptr << endl;

  // Pointer to a pointer

  int **xxptr = &xptr;

  cout << "xxptr = " << xxptr << endl; // Address of xptr

  // Address of xptr

  cout << "&xptr = " << &xptr << endl;

  return 0;
}