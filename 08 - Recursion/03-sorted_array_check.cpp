#include <iostream>

using namespace std;

bool isSorted(int arr[], int n) {
  // Base case
  if (n == 1 or n == 0) { // If the array is empty or has only 1 element
    return true;
  }

  // Recursive case

  if (arr[0] < arr[1] and isSorted(arr + 1, n - 1)) {

    // If the first element is less than the second element and the rest of the
    // array is sorted

    return true;
  }

  return false;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(int);

  cout << isSorted(arr, n) << endl;

  // 1 means true and 0 means false
  // 1 means sorted and 0 means not sorted

  return 0;
}