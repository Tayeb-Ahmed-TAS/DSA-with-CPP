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
