# 2D Vector

## Initialize

```cpp

vector<vector<int>> v = {
                            {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}
                        }; //Creates a 2D vector of integers

```

## Accessing elements

You can access elements of a 2D vector using the [] operator. The index of the first element is 0.

```cpp

vector<vector<int>> v = {
                            {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}
                        };

cout << v[0][0]; //prints 1

```

## Iterating over a 2D vector

You can iterate over a 2D vector using a nested for loop.

```cpp

vector<vector<int>> v = {
                            {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}
                        };

for(int i = 0; i < v.size(); i++) {
    for(int j = 0; j < v[i].size(); j++) {
        cout << v[i][j] << " ";
    }
    cout << endl;
}

```

### Printing using for each loop

You can also use a for each loop to iterate over a 2D vector.

```cpp

vector<vector<int>> v = {
                            {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}
                        };

for(auto row : v) {
    for(auto col : row) {
        cout << col << " ";
    }
    cout << endl;
}

```

### Printing using range based for loop

You can also use a range based for loop to iterate over a 2D vector.

```cpp

vector<vector<int>> v = {
                            {1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}
                        };

for(int i = 0; i < v.size(); i++) {
    for(int num: v[i]) {
        cout << num << " ";
    }
    cout << endl;
}

```

### Note

It's not necessary that all the rows of a 2D vector have the same number of columns. You can have a 2D vector with different number of columns in each row.

```cpp

vector<vector<int>> v = {
                            {1, 2, 3},
                            {4, 5},
                            {6, 7, 8, 9}
                        };

```
