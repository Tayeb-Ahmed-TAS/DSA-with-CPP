#include <iostream>

using namespace std;

int main() {

  char numbers[][10] = {"one", "two", "three", "four", "five"};
  // 2D array of characters. Here row is optional but column is mandatory.
  // The size of the column is 10 because the maximum length of the string
  // is 10. The size of the row is 5 because there are 5 strings.

  cout << numbers[0] << endl; // one

  int n = 3;

  cout << numbers[n] << endl; // four
  cout << numbers[n][2] << endl;
  // u (the element of index 3 (n=3) is "four" and the element of index 2
  // ([n][2]) of "four" is 'u')

  // Printing the 2D array

  cout << endl << "The elements in the 2D array are: " << endl;

  for (int i = 0; i < 5; i++) {
    cout << numbers[i] << endl;
  }

  return 0;
}