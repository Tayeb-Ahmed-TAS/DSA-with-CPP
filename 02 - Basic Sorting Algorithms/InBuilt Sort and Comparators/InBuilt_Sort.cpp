// Inbuilt Sort: Increasing Order (Ascending Order)

#include <algorithm>
#include <iostream>

using namespace std;

int main() {

  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
  int n = sizeof(arr) / sizeof(int);

  // Sort function
  sort(arr, arr + n); // arr+n because we want to sort the whole array and open
                      // interval is [arr,arr+n) means arr+n is not included. It
                      // includes till arr+n-1

  for (auto x : arr) {
    cout << x << " ";
  }

  return 0;
}