# Selection Sort

## key Idea

Repeatedly find the minimum element from unsorted part and putting it at the beginning.

We need to n-1 passes to sort n elements.

## How it works?

The selection sort algorithm works in a way that it divides the list into two different lists, one is the unsorted list, and the other one is the sorted list. The sorted list exists on the left side, and the unsorted list exists on the right side. Initially, the sorted list will be empty, and the unsorted list will be filled with elements.

**Let's discuss the actual working of Selection sort in C++ step by step with detailed illustrations:**

1. **Step 1**:

 First, we have to consider the first element of an array or list as the minimum element.

![Step-1](https://github.com/Tayeb-Ahmed-TAS/Images/blob/f8ff5e07a575b9da7d3cc660c20b69e69475b253/step1-of-selection-sort.png)

2. **Step 2**:

Now, we have to compare the first element, the minimum element, with the second element. If the second element is less than the current minimum element, we will consider the second index element as the smallest; otherwise, we will move forward.

![Step-2](https://github.com/Tayeb-Ahmed-TAS/Images/blob/f8ff5e07a575b9da7d3cc660c20b69e69475b253/step2-of-selection-sort.png)

3. **Step 3**:

Again, the same step of comparing the second element, that is, the minimum element, with the third element, and if the third element is lesser than the current minimum element, then we will consider the same element as the minimum element otherwise we will move forward. This process will continue until the last element of the array or list.

4. **Step 4**:

After traversing through the entire array, we will assign the minimum element to the first position of the array, or in other words, we will swap the first element with the first minimum element of the array.

![Step-4](https://github.com/Tayeb-Ahmed-TAS/Images/blob/f8ff5e07a575b9da7d3cc660c20b69e69475b253/s4-selection-sort.png)

5. **Step 5**:

The indexing always starts from the first unsorted element (Since previous elements are placed at their correct position, they are sorted, and the remaining are unsorted) so that each element of the list can be placed at its correct index. The above step will be repeated until all the elements get placed at their correct position in the list.

![Step-5](https://github.com/Tayeb-Ahmed-TAS/Images/blob/f8ff5e07a575b9da7d3cc660c20b69e69475b253/step5-selection-sort.png)

- The above image shows how every element is compared to its adjacent element, and then the smallest element is swapped to the first position.

- This process continues until the last element of the array.

![Step-5-2](https://github.com/Tayeb-Ahmed-TAS/Images/blob/f8ff5e07a575b9da7d3cc660c20b69e69475b253/step5-selection-sort2.png)

- The above image shows that the iteration starts from the second position, and after comparisons, the second smallest element is swapped into the second position.

![Step-5-3](https://github.com/Tayeb-Ahmed-TAS/Images/blob/f8ff5e07a575b9da7d3cc660c20b69e69475b253/s5-3-selection-sort.png)

![Step-5-4](https://github.com/Tayeb-Ahmed-TAS/Images/blob/f8ff5e07a575b9da7d3cc660c20b69e69475b253/s5-4-selection-sort.png)

- Similarly, the above two images also show the iterations until sorting the whole array means every element is placed at its correct position.

***Finally, the array will be sorted in ascending order.***

## Algorithm

```cpp

Step - 1: First, we have to initialize the first index as the minimum (min_position; Here, min_position represents the current minimum element of the array).

Step - 2: After that, we traverse the remaining array to find the first minimum element of the array.

Step - 3: As discussed, if any value is smaller than the current minimum element, we will swap their values. After swapping, we will update min_position to point to the next element.

Step - 4: We will repeat all the steps until the entire array becomes sorted.

Step - 5: Finally, the array will be sorted in ascending order.

```

## Flowchart

In the following flowchart, we can see the program flow of the Selection sort algorithm in C++ and how the above-mentioned steps are implemented in the actual program.

![Flowchart](https://github.com/Tayeb-Ahmed-TAS/Images/blob/f8ff5e07a575b9da7d3cc660c20b69e69475b253/flowchart-for-selection-sort.png)

## Time Complexity

- The time complexity of the Selection sort algorithm is O(n^2) in all cases, whether the list is sorted or unsorted.

## Space Complexity

- The space complexity of the Selection sort algorithm is O(1) because it requires a constant amount of extra space.
