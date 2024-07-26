#include <iostream>

using namespace std;

void printSubarrays(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      cout << "( ";
      for (int k = i; k <= j; k++) {
        cout << arr[k] << " ";

        // (k == j) ? cout << arr[k] : cout << arr[k] << ", ";
        // For Using coma (,)
      }
      cout << "),";

      // (i == n - 1 && j == n - 1) ? cout << ")" : cout << "), ";
      // For Resolve last coma (,)
    }
    cout << endl;
  }
}

int main() {

  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(arr) / sizeof(int);

  printSubarrays(arr, n);

  return 0;
}

// The number of subarrays of an array of size n is nC2 + n or, n*(n+1)/2.