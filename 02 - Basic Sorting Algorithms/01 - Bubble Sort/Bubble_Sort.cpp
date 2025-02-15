// Bubble Sort: Increasing Order (Ascending Order)

#include <iostream>

using namespace std;

void Bubble_Sort(int arr[], int n) {
  for (int times = 1; times <= n - 1; times++) {
    for (int j = 0; j <= n - times - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void display(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  Bubble_Sort(arr, n);

  cout << "Sorted Array: " << endl;

  display(arr, n);

  return 0;
}