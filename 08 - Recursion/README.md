# Recursion Basics

## What is Recursion?

### Recursion is the principle of mathematical induction

Recursion is a technique in programming where a function calls itself. It is used to solve problems that can be broken down into smaller, repetitive problems. Recursion is a powerful tool that can be used to solve complex problems, but it can also be difficult to understand and debug.

To stop the function from calling itself ad infinitum, a base case is needed. The base case is a condition that stops the recursion from continuing. Without a base case, the function will continue to call itself indefinitely, causing a stack overflow error.

## How Does Recursion Work?

Recursion works by breaking down a problem into smaller, simpler problems. Each time the function calls itself, it solves a smaller version of the original problem. This process continues until the base case is reached, at which point the function stops calling itself and returns a value.

## Why Use Recursion?

Recursion is a powerful tool that can be used to solve complex problems in a simple and elegant way. It is particularly useful for problems that can be broken down into smaller, repetitive subproblems. Recursion can also be used to solve problems that are difficult or impossible to solve using iterative techniques.

However, recursion can be difficult to understand and debug, and it can be less efficient than iterative techniques. Recursion can also be less efficient in terms of memory usage, as each recursive call adds a new frame to the call stack.

In general, recursion should be used when it provides a clear and simple solution to a problem, and when the problem can be easily broken down into smaller subproblems. For more complex problems, iterative techniques may be more appropriate.

---

## 1.1 Factorial

### Pseudocode

```cpp

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    int ans = n * factorial(n - 1);
    return ans;
}

```

or,

```cpp

int factorial(int n) {
    if (n == 0) {
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}

```

or,

```cpp

int factorial(int n) {
    return n == 0 ? 1 : n * factorial(n - 1);
}

```

### Output

```cpp

input : 5

output : 120

```

In this example, the base case is when `n` is equal to 0. When `n` is 0, the function returns 1. Otherwise, the function calls itself with `n - 1` as the argument. This process continues until the base case is reached, at which point the function returns the final result.

It takes time as `O(n)` and space as `O(n)` because it uses the stack to store the function calls.

---

## 1.2 Fibonacci

### First 7 Fibonacci Numbers

```cpp

0, 1, 1, 2, 3, 5, 8

```

- The first two numbers always remain the same, i.e., 0 and 1.

- The next number is the sum of the previous two numbers.

- The Fibonacci sequence is defined by the recurrence relation `F(n) = F(n-1) + F(n-2)`.

### Pseudocode

```cpp

int fibonacci(int n) {
    if (n == 0 or n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

```

### Output

```cpp

input : 6

output : 8

```

---

## 1.3 Sorted Array Check

### Problem Statement

Write a function to check is an array is sorted or not !

### To solve this problem using recursion

1. Check if the array is empty or has only one element. If so, return true.

2. Check if the first element is greater than the second element. If so, return false.

3. Recursively check the rest of the array by calling the function with the next index.

4. If the function returns true for all elements, return true.

5. If the function returns false for any element, return false.

6. Return true if the array is sorted.

7. Return false if the array is not sorted.

8. The base case is when the array is empty or has only one element. In this case, the array is considered sorted.

9. The recursive case is when the first element is less than or equal to the second element. In this case, the function calls itself with the next index.

10. The function calls itself with the next index until the base case is reached.

### Pseudocode

```cpp

bool isSorted(int arr[],int n){

    //base case
    if(n==1 or n==0){ // if the array is empty or has only one element

        return true;

    }

    //rec case
    if(arr[0]<arr[1] and isSorted(arr+1, n-1)){

        // if the first element is less than the second element and the rest of the array is sorted

        return true;

    }
    return false;
}

```

or,

```cpp

bool isSorted(int *arr, int n, int i = 0) {

  if (i == n - 1) {
    // If the array is empty or has only 1 element
    return true;
  }

  if (arr[i] < arr[i + 1] and isSorted(arr, n, i + 1)) {
    // If the first element is less than the second element and the rest of the
    // array is sorted
    // i+1 is the next element of the array
    // n is the size of the array
    // we change the index not the arr (arr+1) itself
    return true;
  }

  return false;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 6};

  int n = sizeof(arr) / sizeof(int);

  cout << isSorted(arr, n, 0) << endl; // Innitializing (index) i to 0

  int arr2[] = {9, 26, 17, 4, 5, 6};

  int n2 = sizeof(arr2) / sizeof(int);

  cout << isSorted(arr2, n2) << endl;
  // If we can't pass the value of i, It will be 0 by default
  // because we initialized it to 0 in the function

  return 0;
}

```

### Summary

- `n - 1` is used because we reduce the problem size by one in each recursive call.

- We pass `arr + 1` to move the pointer to the next element.

- The function progressively checks smaller and smaller subarrays until it reaches the base case.

### Output

```cpp

Input  1    : arr[] = {1, 2, 3, 4, 5}
Output 1    : 1 // true

Input  2    : arr[] = {1, 2, 3, 5, 4, 6}
Output 2    : 0 // false

```

### Explanation

```cpp

Consider, arr = {1, 2, 3, 4, 5}, n = 5:

Step 1 : First call, isSorted({1, 2, 3, 4, 5}, 5)

                1 < 2 → Proceed with isSorted({2, 3, 4, 5}, 4)


Step 2 : Second call, isSorted({2, 3, 4, 5}, 4)

                2 < 3 → Proceed with isSorted({3, 4, 5}, 3)


Step 3 : Third call, isSorted({3, 4, 5}, 3)

                3 < 4 → Proceed with isSorted({4, 5}, 2)


Step 4 : Fourth call, isSorted({4, 5}, 2)

                4 < 5 → Proceed with isSorted({5}, 1)


Step 5 : Fifth call, isSorted({5}, 1)

                Base case reached (n == 1), returns true.


The function then returns true all the way back up the recursive stack.

```

---
