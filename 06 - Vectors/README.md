# Vectors

## Introduction

Vectors are sequence container that contains representing arrays that can change in size.

Just like arrays, vectors use contiguous storage locations for their elements, which means that their elements can also be accessed directly in O(1) time.

But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.

## Declaration

```cpp

vector<int> v; //Creates a vector of integers

```

## Header File

```cpp

#include <vector>

```

## How they grow

Vectors are dynamically resizing arrays. When you push_back an element, the vector checks if it has enough space to store the new element. If it doesn't, it allocates a new block of memory, copies the elements from the old block to the new block, and then adds the new element.

## Accessing elements

You can access elements of a vector using the [] operator. The index of the first element is 0.

```cpp

vector<int> v = {1, 2, 3, 4, 5};

cout << v[0]; //prints 1

```

## Iterating over a vector

You can iterate over a vector using a for loop.

```cpp

vector<int> v = {1, 2, 3, 4, 5};

for(int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}

```

## Fill Constructor

You can create a vector of a specific size and fill it with a specific value.

```cpp

vector<int> v(5, 10); //Creates a vector of size 5 and fills it with 10

```

## Common functions

[Reference](https://cplusplus.com/reference/vector/vector/)
