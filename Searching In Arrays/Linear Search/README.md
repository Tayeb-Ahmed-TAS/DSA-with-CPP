# Linear Search

Linear search is a simple search algorithm that searches for a target value within an array. It compares each element of the array to the target value until it finds a match or until all the elements have been searched. If the target value is found, the index of the target value is returned. If the target value is not found, the function returns -1.

## Algorithm

```cpp
1. Start from the first element of the array.
2. Compare the target value with each element of the array.
3. If the target value is found, return the index of the element.
4. If the target value is not found, return -1.
```

## Pseudocode

```cpp
function linearSearch(array, target):
    for each element in the array:
        if element equals target:
            return index of element
    return -1
```

## Implementation

- [C++ Code](linear_search.cpp)

## Complexity Analysis

- Time complexity: O(n)
- Space complexity: O(1)
