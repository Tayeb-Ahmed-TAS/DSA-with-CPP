# Linear Search

Linear search is a simple search algorithm that searches for a target value within an array. It compares each element of the array to the target value until it finds a match or until all the elements have been searched. If the target value is found, the index of the target value is returned. If the target value is not found, the function returns -1.

## Algorithm

```cpp
1. Start from the first element of the array.
2. Compare the target value with each element of the array.
3. If the target value is found, return the index of the element.
4. If the target value is not found, return -1.
```

```cpp
LINEAR-SEARCH(DATA, N, ITEM)

    Step 1: Set LOC = 1

    Step 2: Repeat Steps 3 and 4 while LOC <= N and DATA[LOC] ≠ ITEM

    Step 3: Set LOC = LOC + 1

    Step 4: [Successful?] If LOC > N, then
        Write: ITEM not in the list
        Otherwise
        Write: ITEM is in position LOC
        
    Step 5: Exit
```

```cpp
LINEAR(DATA,N,ITEM,LOC)

Step 1: Set DATA[N+1]=ITEM

Step 2: Set LOC=1

Step 3: Repeat while DATA[LOC] != ITEM
        Set LOC=LOC+1

Step 4: [Successful?] If LOC=N+1, then
        Write: ITEM is not in the list
        Otherwise
        Write: ITEM is in position LOC

Step 5: Exit

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

- [C++ Code](https://github.com/Tayeb-Ahmed-TAS/DSA-with-CPP/blob/0ab4988cd4cf590d9bbfd38c45cfbee51a5e4279/Searching%20In%20Arrays/Linear%20Search/Linear_Search.cpp)

## Complexity Analysis

- Time complexity: O(n)
- Space complexity: O(1)
