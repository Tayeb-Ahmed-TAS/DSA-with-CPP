# Pointers & Dynamic Memory

## Pointers

Pointer is a variable that stores the memory address of another variable.

It is a powerful feature of C++ that allows you to work with memory at a low level.

### Declaring Pointers

To declare a pointer, we use an asterisk `*` between the datatype and the variable name.

```cpp

int *ptr; // Pointer to an integer

double *ptr; // Pointer to a double

char *ptr; // Pointer to a character

```

### Address of Operator (&)

The address of operator `&` is used to get the address of a variable.

```cpp

int x = 10;

int *ptr = &x; // Pointer to x

cout << ptr; // Output: Address of x

```

When we print the address of a variable, it is displayed in hexadecimal format.

For example, the address of a variable `x` is `0x7fffbf7f1bdc`.

Here, `0x` is a prefix that indicates the address is in hexadecimal format.

### Dereference Operator (*)

The dereference operator `*` is used to get the value of a variable that a pointer is pointing to.

The operator itself can be read as "value pointed to by".

```cpp

int x = 10;

int *ptr = &x; // Pointer to x

cout << *ptr; // Output: 10

```
