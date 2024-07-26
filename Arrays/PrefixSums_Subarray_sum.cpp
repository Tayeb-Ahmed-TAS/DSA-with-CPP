// Problem (Prefix Sums Approach): Find the largest sum of sub-arrays
// Prefix Sums is use because it's faster than Brute Force Approach
// It is an Optimization problem
// Time Complexity of Prefix Sums Approach is O(N^2)

#include <iostream>

using namespace std;

int largestSubArraySum(int arr[], int n) {
  // Prefix Sums
  // We can also use int prefix[n]; instead of int prefix[n] = {0};
  int prefix[n] = {0}; // Initialize the prefix array with 0
  prefix[0] = arr[0]; // Beacuse the initial prefix sum ( prefix[0] ) is same as
                      // first value of array ( arr[0] )

  for (int i = 1; i < n; i++) {
    // Array must start from index 1 (i=1) because if it's starts from index 0
    // (i=0) then i-1 = -1 which is not a valid index
    prefix[i] = prefix[i - 1] + arr[i];
  }

  // Largest Sum logic

  int largest_sum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int subArraySum = (i > 0) ? prefix[j] - prefix[i - 1] : prefix[j];
      // if the i==0 that means if i<1 then i-1 will be a negative value like
      // (i = -1) which is not a valid index that's why we use this condition

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