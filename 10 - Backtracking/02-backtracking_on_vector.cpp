#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> arr, int n) {

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void fillArray(vector<int> &arr, int i, int n, int val) {

  // Base case
  if (i == n) {
    printArray(arr, n);
    return;
  }

  // Rec Case
  arr[i] = val;
  fillArray(arr, i + 1, n, val + 1);

  // Backtracking Steps
  arr[i] = -1 * arr[i];
}

int main() {

  vector<int> arr(100, 0);
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