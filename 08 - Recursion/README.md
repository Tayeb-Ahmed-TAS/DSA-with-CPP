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

  if (i == n or i == n - 1) {
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

## 1.4 Print 1 to N Numbers

### Problem Statement

Print numbers from 1 to N using recursion in both increasing and decreasing order.

### For Increasing Order

1. Check if `n` is equal to 0. If so, return.

2. print the number `n`.

3. Recursively call the function with `n - 1`.

4. The base case is when `n` is equal to 0. In this case, the function returns without printing anything.

### For Decreasing Order

1. Check if `n` is or equal to 0. If so, return.

2. Recursively call the function with `n - 1`.

3. Print the number `n`.

4. The base case is when `n` is equal to 0. In this case, the function returns without printing anything.

### Pseudocode

```cpp

void printIncreasing(int n) {

    if (n == 0) {

        return;
    }

    printIncreasing(n - 1);

    cout << n << " ";

}

void printDecreasing(int n) {

    if (n == 0) {

        return;
    }

    cout << n << " ";

    printDecreasing(n - 1);

}

```

### Output

```cpp

Input : 5

Output : 1 2 3 4 5

Output : 5 4 3 2 1

```

---

## 1.5 First Occurence

### Problem Statement

Write a function to find the first occurence of an element in an array.

### What is First Occurence?

First occurence is the first time an element appears in an array. For example, in the array `{1, 2, 3, 4, 5, 2}`, the first occurence of `2` is at index `1`.

### To solve this problem using recursion

1. We need to perform a **Linear search recursively** to find the first occurrence of an element in an array.

2. **Base Case:**

   Check if the size of the array is `0`.

   - If yes, return `-1` since the key cannot be found in an empty array.

3. **Check the first element:**

   If `arr[0] == key`, then we found the element at the first index.

   - Return `0` as it's the position in the current subarray.

4. **Recursive Step:**

   Call the same function on the rest of the array (i.e., `arr + 1`) and reduce the size `n - 1`.

5. Store the result from the recursive call in `subIndex`.

6. If `subIndex == -1`, that means the key was not found in the subarray.

   - So return `-1`.

7. If `subIndex != -1`, that means the key was found in the subarray.

   - Add `1` to `subIndex` and return it (to adjust to the original array's index).

8. The function continues to return back through the recursive calls with the corrected index until it reaches the top level and gives the final result.

### Pseudocode

```cpp

int firstOccurence(int arr[], int n, int key){

    //base case
    if(n==0){ // if the array is empty or has only one element

        return -1;

    }

    //rec case

    if(arr[0]==key){ // if the first element is equal to the target element

        return 0; // return the index of the first element

    }

    int subIndex = firstOccurence(arr+1, n-1, key); // check the rest of the array as subarray

    if(subIndex != -1){ // if the function returns a valid index for the rest of the array

        return subIndex + 1; // return that index

    }

    return -1; // if the function returns -1 for the rest of the array, return -1
}

```

### Explanation

```cpp

✅ Step-by-step trace:

Step 0:

    Array = [3, 5, 7, 6, 2]
    Key = 7
    Check: arr[0] = 3 → Not the key
    → Solve subproblem for: [5, 7, 6, 2]

Step 1:

    Array = [5, 7, 6, 2]
    Check: arr[0] = 5 → Not the key
    → Solve subproblem for: [7, 6, 2]

Step 2:

    Array = [7, 6, 2]
    Check: arr[0] = 7 → ✅ Found the key! Return 0

Now, we bubble back through the recursion:

Step 2 returns: 0  (as, if(arr[0] == key) return 0)
Step 1 returns: 0 + 1 = 1 (as, subIndex + 1)
Step 0 returns: 1 + 1 = 2 (as, subIndex + 1)

So, the key was found at index 2 in the original array.

```

---

## 1.6 Last Occurence

### Problem Statement

Write a function to find the last occurence of an element in an array.

### What is Last Occurence?

Last occurence is the last time an element appears in an array. For example, in the array `{1, 2, 3, 4, 5, 2}`, the last occurence of `2` is at index `5`.

### To solve this problem using recursion

### Pseudocode

```cpp

int lastOccurence(int arr[], int n, int key){

        //base case
        if(n==0){ // if the array is empty

            return -1;

        }

        //rec case

        int subIndex = lastOccurence(arr+1, n-1, key); // check the rest of the array as subarray

        if(subIndex==-1){ // if the function returns -1 for the rest of the array

            if(arr[0]==key){ // if the first element is equal to the target element

                return 0; // return the index of the first element

            }else{

                return -1; // if the first element is not equal to the target element, return -1

            }
        }else{

            return subIndex + 1; // if the function returns a valid index for the rest of the array, return that index
        }
}

```

### Explanation

```cpp

✅ Step-by-step trace:

Step 1:

    Array = [1, 2, 7, 6, 7, 5]
    Key = 7

        Call subproblem with [2, 7, 6, 7, 5]

Step 2:

    Array = [2, 7, 6, 7, 5]

        Call subproblem with [7, 6, 7, 5]

Step 3:

    Array = [7, 6, 7, 5]

        Call subproblem with [6, 7, 5]

Step 4:

    Array = [6, 7, 5]

        Call subproblem with [7, 5]

Step 5:

    Array = [7, 5]

        Call subproblem with [5]

Step 6:

    Array = [5]

        Call subproblem with [] (empty array)

Step 7:

    Array = []

        Base case reached!

        Return -1 (empty array, nothing found)

```

```cpp

🔄 Now Bubbling Back


1. At [5], key not found → return -1

2. At [7, 5], arr[0] == key → return 0

3. At [6, 7, 5], key found at subarray → return 0 + 1 = 1

4. At [7, 6, 7, 5], key found at subarray → return 1 + 1 = 2

5. At [2, 7, 6, 7, 5], key found at subarray → return 2 + 1 = 3

6. At [1, 2, 7, 6, 7, 5], key found at subarray → return 3 + 1 = 4

    Thus, last occurrence of 7 is at index 4

```

![Last Occurence](https://github.com/Tayeb-Ahmed-TAS/Images/blob/main/last%20occurence.png)
