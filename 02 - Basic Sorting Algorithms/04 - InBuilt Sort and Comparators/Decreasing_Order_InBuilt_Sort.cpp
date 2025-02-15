// Inbuilt Sort: Decreasing Order (Descending Order)

#include <algorithm>
#include <iostream>

using namespace std;

void display(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {

  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  // Sorting in Ascending Order
  sort(arr, arr + n);

  // Reversing the array to get the sorted array in Descending Order

  reverse(arr, arr + n);

  display(arr, n);

  return 0;
}

// For sort in descending order,
// we just need to reverse the array after sorting it in ascending order.