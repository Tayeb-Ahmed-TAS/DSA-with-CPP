// Problem: Reverse all the elements of a given array

#include <iostream>

using namespace std;

void display(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverse_array(int arr[], int n) {
  int start = 0;
  int end = n - 1; //  Because array index starts from 0

  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main() {

  int arr[] = {10, 20, 30, 45, 60, 80, 95};

  int n = sizeof(arr) / sizeof(int);

  cout << "Original Array: " << endl;

  display(arr, n);

  // Reverse the array

  reverse_array(arr, n);

  cout << "Reversed Array: " << endl;

  display(arr, n);

  return 0;
}

// Logic:

// 1. Initialize two variables start and end with 0 and n-1 respectively.
// 2. Swap the elements at start and end indexes.
// 3. Increment the start and decrement the end.
// 4. Repeat the above steps until start is less than end.
// 5. The array will be reversed.