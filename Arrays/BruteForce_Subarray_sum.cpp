// Problem (Brute Force Approach): Find the largest sum of sub-arrays
// Time Complexity of Brute Force Approach is O(N^3)

#include <iostream>

using namespace std;

int largestSubArraySum(int arr[], int n) {

  int largest_sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {

      int subArraySum = 0;

      for (int k = i; k <= j; k++) {
        subArraySum += arr[k];
      }

      // Check if subArraySum > largest_sum and Update largest_sum

      largest_sum = max(largest_sum, subArraySum);
    }
  }

  return largest_sum;
}

int main() {

  int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};

  int n = sizeof(arr) / sizeof(int);

  cout << "The largest sum of sub-arrays is : " << largestSubArraySum(arr, n)
       << endl;

  return 0;
}