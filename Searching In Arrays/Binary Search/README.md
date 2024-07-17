# Binary Search

Binary search is a search algorithm that finds the position of a target value within a sorted array. It compares the target value to the middle element of the array and continues to narrow down the search range until the target value is found or the search range is empty. If the target value is found, the index of the target value is returned. If the target value is not found, the function returns -1.

## Points to be noted

- The array must be sorted before applying binary search.
- The time complexity of binary search is O(log n).
  - That means if the array has 100 items then log 100 = 6 (6.644 but 6 by taking integer value).{log base 2 (100) = 6,,,,  log base 2 (100) = log(100)/log(2) = 6.64}. So the binary search will take at most 6 iterations to find the element.

## Algorithm

```cpp

1. Set start to 0 and end to n-1.
2. Repeat steps 3-7 until start is less than or equal to end.
3. Set mid to (start + end) / 2.
4. If the target is equal to the element at mid, return mid.
5. If the target is less than the element at mid, set end to mid - 1.
6. If the target is greater than the element at mid, set start to mid + 1.
7. If the target is not found, return -1.

```

```cpp

BINARY(DATA,LB,UB,ITEM,LOC)

Step 1: Set BEG=LB, END=UB and MID = INT[(BEG+END)/2]

Step 2: Repeat Steps 3 to 6 while BEG<=END and DATA[MID] != ITEM

Step 3: If ITEM < DATA[MID], then
        Set END = MID-1
        Else
        Set BEG = MID+1

Step 4: Set MID = INT[(BEG+END)/2]

Step 5: If DATA[MID] = ITEM, then
        Set LOC = MID
        Else
        Set LOC = NULL

Step 6: Exit

```

## Pseudocode

```cpp

function binarySearch(array, target):
    set start to 0
    set end to length of array - 1
    while start <= end:
        set mid to (start + end) / 2
        if array[mid] equals target:
            return mid
        if target is less than array[mid]:
            set end to mid - 1
        else:
            set start to mid + 1
    return -1

```

## Complexity

- Time complexity: O(log n)
- Space complexity: O(1)

### ***Binary Search is Better than Linear Search***
