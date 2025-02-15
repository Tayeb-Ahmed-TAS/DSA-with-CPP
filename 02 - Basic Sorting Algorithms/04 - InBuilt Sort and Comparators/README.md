# Inbuilt Sort in C++

## What is Inbuilt Sort?

- Inbuilt sort is a function in C++ which is used to sort an array.

- It is a function which is used to sort an array in both ***Ascending*** and ***Descending*** order.

## Header File

```cpp

#include<algorithm>

```

## Sorting Function

```cpp

sort(arr, arr+n);

```

## Time Complexity

- The time complexity is O(nlogn).

## Why we use Inbuilt Sort?

- It is much faster than Bubble sort, Selection sort and Insertion Sort. Because those algorithm takes O(n^2)  time.

- This is a efficient algorithm.

- It is a stable algorithm.

- It's recomendent to use this algorithm.

- For most types of arrays it will work.

- In some cases it is not recomended to use this algorithm.

- Like counting sort, radix sort, bucket sort, etc.

## Example

```cpp

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 4, 2, 5, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

```

### Output

```output

1 2 3 4 5

```
