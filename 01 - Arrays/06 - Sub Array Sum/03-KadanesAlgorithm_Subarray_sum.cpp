// Problem (Kadane's Algorithm): Find the largest sum of sub-arrays
// It works in Linear Time
// Time Complexity of Kadane's Algorithm is O(N)
// It does not take any extra space like Prefix Sums
// It takes space O(1)
// In terms of time and space this is the best possible solution that we can
// have for maximum sub-array sum

#include <iostream>

using namespace std;

int largestSubArraySum(int arr[], int n) {
  int current_sum = 0;
  int largest_sum = 0;

  for (int i = 0; i < n; i++) {
    current_sum += arr[i];

    // If the current sum is negative (less than 0) then we'll ignore it as zero
    // (0) and move on
    if (current_sum < 0) {
      current_sum = 0;
    }

    largest_sum = max(largest_sum, current_sum);
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