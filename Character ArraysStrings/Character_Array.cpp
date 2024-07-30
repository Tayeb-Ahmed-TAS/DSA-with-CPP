#include <cstring>
#include <iostream>

using namespace std;

int main() {

  char arr[] = {'a', 'b', 'c', 'd', 'f', 'g', 'h', 'i'};
  // It will give garbage value at the end. It's not recomended.
  cout << arr << endl;

  char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '\0'};
  cout << arr2 << endl;

  char arr3[] = "hello";
  cout << arr3 << endl;

  cout << strlen(arr3) << endl; // 5 (Number of Visible characters. It will not
                                // count the null character.)

  cout << sizeof(arr3) << endl; // 6 (It will count the null character also.)

  // Taking input

  char arr_inp[100];

  cout << "Enter array elements:" << endl;

  cin >> arr_inp;

  cout << arr_inp << endl;

  return 0;
}