// Problem: Print all the pairs of elements in the array.
// Example: arr[] = {1, 2, 3, 4}
// Output: (1, 2), (1, 3), (1, 4), (2, 3), (2, 4), (3, 4)

#include <iostream>

using namespace std;

void printAllPairs(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      cout << "(" << arr[i] << ", " << arr[j] << ")"
           << "  ";
    }

    cout << endl;
  }
}

int main() {

  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(arr) / sizeof(int);

  printAllPairs(arr, n);

  return 0;
}

// Logic:
// 1. Initialize two loops, one loop for the first element and the other loop
// for the second element.
// 2. The first loop will run from 0 to n-1 and the second loop will run from
// i+1 to n.
// 3. Print the pair of elements at ith and jth index.
// 4. Repeat the above steps until the first loop reaches n-1.
// 5. All the pairs of elements will be printed.