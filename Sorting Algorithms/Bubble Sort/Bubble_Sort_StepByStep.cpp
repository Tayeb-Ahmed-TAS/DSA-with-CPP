#include <iostream>

using namespace std;

void display(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void Bubble_Sort(int arr[], int n) {
  for (int times = 1; times <= n - 1; times++) {
    cout << "After " << times << " pass: " << endl;
    for (int j = 0; j <= n - times - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        display(arr, n);
      }
    }
    cout << endl;
  }
}

int main() {
  int arr[] = {5, 4, 3, 2, 1};
  int n = sizeof(arr) / sizeof(int);

  cout << "Original Array: " << endl;
  display(arr, n);

  cout << endl << "Sorting Steps=> " << endl << endl;

  Bubble_Sort(arr, n);

  cout << "Sorted Array: " << endl;

  display(arr, n);

  return 0;
}