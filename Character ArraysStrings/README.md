# Character Arrays Strings

## Character Arrays

A character array is a sequence of characters stored in consecutive memory locations. The array is terminated by a **null character** ***'\0'***.

## Creating an Array of Characters

```cpp

char arr[100];

char arr[100] = {'a', 'b', 'c'}; // Wrong (Not Recommended because it will return garbage values)

char arr[100] = {'a', 'b', 'c', '\0'}; // Right (Recommended)

char arr[100] = "abc"; // It automatically adds '\0' (null character) at the end

```

## cin.get()

cin.get() reads a single character from the input buffer.

cin.get() is used to read white spaces and new lines which cin cannot read.

```cpp

char arr[100];

cin.get(arr); // Reads a line of text including spaces

```

```cpp

char arr[100];

cin.get(arr, 100); // Reads a line of text including spaces upto 100 characters

```
