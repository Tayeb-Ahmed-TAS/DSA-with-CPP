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

## cin.getline()

cin.getline() reads a line of text from the input buffer.

cin.getline() is used to read white spaces and new lines which cin cannot read.

```cpp

char arr[100];

cin.getline(arr, 100); // arr is the name of the array and 100 is the size of the array

```

- This can read only one line of text. When the user presses enter, the input is terminated.

```cpp

char arr[100];

cin.getline(arr, 100, '.'); // Reads a line of text including spaces upto 100 characters or until a '.' is encountered

```

- This can read multiple lines of text.

- '.' is the delimiter.

- The input will stop when the delimiter is encountered. (Press '.' and then enter)

- We can use anything as a delimiter.
