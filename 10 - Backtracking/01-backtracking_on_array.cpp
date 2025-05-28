#include <iostream>

using namespace std;

void printArray(int *arr, int n) {

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
}

void fillArray(int *arr, int i, int n, int val) {

  // Base Case
  if (i == n) {
    // print array
    printArray(arr, n);

    return;
  }

  // Rec Case

  arr[i] = val;
  fillArray(arr, i + 1, n, val + 1);

  // Backtracking Step

  arr[i] = -1 * arr[i];
}

int main() {

  int arr[100] = {0};
  int n;
  cout << "Enter the array length: ";
  cin >> n;

  int val;
  cout << "Enter the starting value: ";
  cin >> val;

  int i = 0;

  fillArray(arr, i, n, val);

  printArray(arr, n);

  return 0;
}