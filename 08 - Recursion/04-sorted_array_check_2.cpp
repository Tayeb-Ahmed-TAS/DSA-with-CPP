#include <iostream>

using namespace std;

bool isSorted(int arr[], int n, int i = 0) {

  if (i == n - 1) {
    // If the array is empty or has only 1 element
    return true;
  }

  if (arr[i] < arr[i + 1] and isSorted(arr, n, i + 1)) {
    // If the first element is less than the second element and the rest of the
    // array is sorted
    // i+1 is the next element of the array
    // n is the size of the array
    // we change the index not the arr (arr+1) itself
    return true;
  }

  return false;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(int);

  cout << isSorted(arr, n, 0) << endl; // Innitializing (index) i to 0

  int arr2[] = {9, 26, 17, 4, 5, 6};
  int n2 = sizeof(arr2) / sizeof(int);
  cout << isSorted(arr2, n2) << endl;
  // If we can't pass the value of i, It will be 0 by default
  // because we initialized it to 0 in the function

  return 0;
}