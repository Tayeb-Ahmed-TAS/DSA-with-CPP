# Dynamic Memory Allocation

Dynamic memory allocation is a feature of C++ that allows you to allocate memory at runtime.

It is useful when you don't know the size of the memory required at compile time.

## New Operator

The new operator is used to allocate memory at runtime.

It returns the address of the memory allocated.

```cpp

int *ptr = new int;         // Allocate memory for an integer

double *ptr = new double; // Allocate memory for a double

char *ptr = new char;   // Allocate memory for a character

```

## Delete Operator

The delete operator is used to deallocate memory that was allocated using the new operator.

```cpp

int *ptr = new int;     // Allocate memory for an integer

delete ptr;           // Deallocate memory

```

### New Operator (For Arrays)

```cpp

int *ptr = new int[5];         // Allocate memory for an array of integers

double *ptr = new double[5]; // Allocate memory for an array of doubles

char *ptr = new char[5];   // Allocate memory for an array of characters

```

### Delete Operator (For Arrays)

```cpp

int *ptr = new int[5];     // Allocate memory for an array of integers

delete[] ptr;             // Deallocate memory

```

### Memory Leaks

When you allocate memory using the new operator, you must deallocate it using the delete operator.

Similarly, when you allocate memory for an array using the new operator, you must deallocate it using the delete[] operator.

If you deallocate memory using the wrong operator, it can lead to memory leaks or undefined behavior.

## Example

```cpp

int *ptr = new int; // Allocate memory for an integer

*ptr = 10; // Assign value to the memory

cout << *ptr; // Output: 10

delete ptr; // Deallocate memory

```

### Point to be Noted

When we deallocate memory using the delete operator, the pointer still points to the memory location (Memory address).

## Example

```cpp

int *ptr = new int[5]; // Allocate memory for an integer array

cout << ptr; // Output: Memory address

for (int i = 0; i < 5; i++) {

    ptr[i] = i; // Assign values to the memory

    cout << ptr[i] << " "; // Output: 0 1 2 3 4

}

delete[] ptr; // Deallocate memory

cout << ptr; // Output: Same Memory address

```

## 2D Dynamic Array

We'll combine multiple 1D dynamic arrays to create a 2D dynamic array.

This is going to be a special array which is called *Array of Pointers*.

```cpp

int **ptr = new int*[rows]; // Allocate memory for an array of integer pointers
// This array stores the memory addresses of the 1D arrays

for (int i = 0; i < rows; i++) {

    ptr[i] = new int[cols]; // Allocate memory for each row

}

for (int i = 0; i < rows; i++) {

    for (int j = 0; j < cols; j++) {

        ptr[i][j] = i + j; // Assign values to the memory

        cout << ptr[i][j] << " "; // Output: 

    }

    cout << endl;
}

for (int i = 0; i < rows; i++) {

    delete[] ptr[i]; // Deallocate memory for an array of integers

}

delete[] ptr; // Deallocate memory for an array of integer pointers

```
