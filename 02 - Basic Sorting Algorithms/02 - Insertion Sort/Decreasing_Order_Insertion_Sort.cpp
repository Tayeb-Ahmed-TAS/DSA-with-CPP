// Insertion Sort: Decreasing Order (Descending Order)

#include <iostream>

using namespace std;

void Insertion_Sort(int arr[], int n) {
  for (int i = 1; i <= n - 1; i++) {
    int current = arr[i];
    int prev = i - 1;

    while (prev >= 0 and arr[prev] < current) {
      arr[prev + 1] = arr[prev];
      prev--;
    }

    arr[prev + 1] = current;
  }
}

void display(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {

  int arr[] = {12, 54, 65, 7, 23, 9};
  int n = sizeof(arr) / sizeof(int);

  Insertion_Sort(arr, n);

  cout << "Sorted Array: ";

  display(arr, n);

  return 0;
}