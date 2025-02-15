// Inbuilt Sort: Decreasing Order (Descending Order) Using greater<int>()

#include <algorithm>
#include <iostream>

using namespace std;

int main() {

  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  // Sorting in Descending Order

  sort(arr, arr + n, greater<int>());

  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}