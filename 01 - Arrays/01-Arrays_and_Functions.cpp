#include <iostream>

using namespace std;

// We can also pass the array as pointer like "int *arr"

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    arr[i] = arr[i] * 2; // Updating the array
    cout << arr[i] << "  ";
  }
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int size = sizeof(arr) / sizeof(int);

  cout << "Size of array: " << sizeof(arr) << endl;

  cout << "Inside Main the array is : ";

  for (int i = 0; i < size; i++) {
    cout << arr[i] << "  ";
  }

  cout << endl << "Inside Function the array is : ";

  printArray(arr, size);

  return 0;
}