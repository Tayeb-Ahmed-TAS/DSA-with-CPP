// 1D Dynamic Array

#include <iostream>

using namespace std;

int main() {

  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  // Dynamic Array
  int *arr = new int[n];

  cout << "Address of Array: " << arr << endl;

  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
    cout << arr[i] << " ";
  }

  delete[] arr; // Deallocating the memory

  cout << endl << "Address of Array after deletion: " << arr << endl;

  return 0;
}