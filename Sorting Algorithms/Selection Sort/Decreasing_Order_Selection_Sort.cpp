// Selection Sort: Decreasing Order (Descending Order)

#include <iostream>

using namespace std;

void Selection_Sort(int arr[], int n) {
  for (int pos = 0; pos < n - 1; pos++) {
    int max_position = pos;
    for (int j = pos; j < n; j++) {
      if (arr[j] > arr[max_position]) {
        max_position = j;
      }
    }
    swap(arr[pos], arr[max_position]);
  }
}

int main() {

  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  Selection_Sort(arr, n);

  cout << "Sorted array:" << endl;

  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}