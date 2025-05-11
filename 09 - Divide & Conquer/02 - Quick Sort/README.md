# Quick Sort

Quick Sort is a divide-and-conquer algorithm that sorts an array by selecting a **`pivot`** element and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the **`pivot`**. The sub-arrays are then sorted recursively.

**`pivot`** is an element from the array that is used to partition the array into two halves. The choice of **`pivot`** can significantly affect the performance of the algorithm.

Usually, the first element, the last element, or the median of the first, middle, and last elements is chosen as the **`pivot`**.

        Note: It is one of the most popular sorting algorithms.

## How it Works?

1. **Choose a Pivot**: Pivort point is the point where you want to divide the array. It can be the first element, the last element, or any random element. We're going to use the last element as the **`pivot`** always for simplicity.

2. **Partitioning**: Rearrange the array so that all elements with values less than the **`pivot`** come before it (left), and all elements with values greater than the **`pivot`** come after it (right). After partitioning, the **`pivot`** is in its final position.

3. **Quick Sort**: Recursively sort the left part and the right part of the array.

4. **Base Case**: The recursion ends when the size of the array is 1 or 0, which are already sorted.

### Illustration

```cpp

Lets, take an array

a = [10, 5, 2, 0, 7, 6, 4]

Initial Array:

Index:      0   1   2   3   4   5   6
Values:     10  5   2   0   7   6   4
                                    ↑
                                  pivot

Pivot: 4
initially, i = -1 (s-1 = 0-1 = -1)   // Marks end of "smaller" region

Partitioning:

 * All values < pivot are to its left

 * All values >= pivot are to its right

 * Then place the pivot at its correct sorted position

        pivot = a[6] = 4

        s = 0, e = 6

        a = [10, 5, 2, 0, 7, 6, 4]

        i = -1 // marks end of "smaller" region
        j = 0 // marks end of "greater" region

🔁 Loop (j from 0 to 5):

    for(int j=s;j<e;j++){

    if(a[j] < pivot){

        i++;

        swap(a[i],a[j]);
        }
    }

Here,

        j = 0 → a[0] = 10
        10 > 4 → do nothing

        j = 1 → a[1] = 5
        5 > 4 → do nothing

        j = 2 → a[2] = 2
        2 < 4 →
        → i becomes 0
        → swap a[0] and a[2]
        → array becomes: [2, 5, 10, 0, 7, 6, 4]

        j = 3 → a[3] = 0
        0 < 4 →
        → i becomes 1
        → swap a[1] and a[3]
        → array becomes: [2, 0, 10, 5, 7, 6, 4]

        j = 4 → a[4] = 7
        7 > 4 → do nothing

        j = 5 → a[5] = 6
        6 > 4 → do nothing


🔁 After Loop:

Now i = 1, so we swap a[i+1] and a[e] (pivot)

→ swap a[2] and a[6]

→ array becomes:

a = [2, 0, 4, 5, 7, 6, 10]
           ↑
         pivot


📌 Final Output of Partition function:

* Pivot 4 is placed in its correct position.

* Index returned is 2.

* All values left of 4 are < 4, all right are >= 4.

```

### Time Complexity

- **Best Case**: O(n log n) - This occurs when the pivot divides the array into two equal halves at each level of recursion.

- **Average Case**: O(n log n) - This is the expected time complexity for a random pivot selection.

- **Worst Case**: O(n^2) - This occurs when the pivot is always the smallest or largest element, leading to unbalanced partitions. This can happen with already sorted arrays or when the pivot is chosen poorly.

### Space Complexity

- O(log n) - This is the space complexity for the recursive stack space used by the algorithm. In the worst case, it can go up to O(n) if the recursion goes too deep.

---
