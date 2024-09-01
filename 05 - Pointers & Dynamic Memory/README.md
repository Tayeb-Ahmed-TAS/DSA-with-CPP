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

### Null Pointer

A null pointer is a pointer that does not point to any memory location.

It is used to indicate that the pointer is not pointing to a valid memory location.

```cpp

int *ptr = nullptr; // Null pointer

cout << ptr; // Output: 0

cout << *ptr; // Error: Segmentation fault

```

or,

```cpp

int *ptr = NULL; // Null pointer

cout << ptr; // Output: 0

cout << *ptr; // Error: Segmentation fault

```

### Rrference Variable (&)

Reference Variable is very powerful feature of C++ that allows you to work with memory at a low level.

It will allowes to pass objects by reference to function.

They create an alias to an existing variable.

```cpp

int x = 10;

int &ref = x; // Reference to x

cout << ref; // Output: 10

```

- Note: Reference variable must be initialized when declared.

### Pass by Reference using Reference Variable

```cpp

void swap(int &a, int &b) {

    int temp = a;

    a = b;

    b = temp;

}

int main() {

    int x = 10, y = 20;

    cout << x << " " << y<<endl; // Output: 10 20

    swap(x, y);

    cout << x << " " << y<<endl; // Output: 20 10

    return 0;

}

```

### Output

```cpp

10 20

20 10

```

### Why Pass by Reference?

- Pass by reference is more efficient than pass by value because it does not create a copy of the object.

- It allows you to modify the original object inside the function.

- It is used when you want to modify the original object inside the function.

### Example Pass by Value

```cpp

void swap(int a, int b) {

    int temp = a;

    a = b;

    b = temp;

}

int main() {

    int x = 10, y = 20;

    cout << x << " " << y<<endl; // Output: 10 20

    swap(x, y);

    cout << x << " " << y<<endl; // Output: 10 20

    return 0;

}

```

### Output

```cpp

10 20

10 20

```

- That's why we use pass by reference when we want to modify the original object inside the function.
