# Insertion Sort

Insertion sort is similar to playing cards in our hands.

![Insertion-Sort Card Example](https://github.com/Tayeb-Ahmed-TAS/Images/blob/6ed7ea8bdd1bc95e8bd45120c623b81b08939776/card_insertion.png)

Insert the ***card*** in its correct position in a sorted part.

It is a comparison-based algorithm that builds a final sorted list one item at a time.

It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

## How it works?

Now, let's know about the working of the insertion sort C++ algorithm and how it behaves in every iteration.

**Let's suppose we have an array to be sorted as given below:**

![Insertion Sort Example](https://github.com/Tayeb-Ahmed-TAS/Images/blob/7f3df16be97e6fd5fc6f7b9bf699687c5a809340/working-of-the-insertion-sort.png)

1. **First Pass :**

In the above array, we will consider the first element as already sorted. Therefore, the first element is considered sorted. The remaining array will be considered unsorted.

![First Pass](https://github.com/Tayeb-Ahmed-TAS/Images/blob/7f3df16be97e6fd5fc6f7b9bf699687c5a809340/insertion-sort-first-pass.png)

2. **Second Pass :**

Now, we will iterate through the entire elements of the array and then compare them with their previous element. We will compare the second element with the first element and if it is smaller than the first element, the second element will be placed in place of the first element.

![Second Pass](https://github.com/Tayeb-Ahmed-TAS/Images/blob/7f3df16be97e6fd5fc6f7b9bf699687c5a809340/insertion-sort-second-pass.png)

3. **Third Pass :**

After sorting the first two elements, if the next value in the array is more or greater than the previous element, then the next element's place remains unchanged, which means no swapping will happen.

![Third Pass](https://github.com/Tayeb-Ahmed-TAS/Images/blob/7f3df16be97e6fd5fc6f7b9bf699687c5a809340/insertion-sort-third-pass.png)

4. **Fourth Pass :**

Similarly, we will place every element which is unsorted in its correct position so that they will be sorted.

![Fourth Pass](https://github.com/Tayeb-Ahmed-TAS/Images/blob/7f3df16be97e6fd5fc6f7b9bf699687c5a809340/insertion-sort-fourth-pass.png)

- Here, in the above, we are comparing the element until it becomes sorted and placed at its correct position by comparing it with its adjacent element.

![Correct Position By Comparing](https://github.com/Tayeb-Ahmed-TAS/Images/blob/7f3df16be97e6fd5fc6f7b9bf699687c5a809340/correct-position-by-comparing.png)

![Comparing Adjacent Element](https://github.com/Tayeb-Ahmed-TAS/Images/blob/7f3df16be97e6fd5fc6f7b9bf699687c5a809340/comparing-adjacent-element.png)

- In the above image, we have repeated the previous steps and keep changing the position of 5 until it becomes sorted.

- We will keep repeating the steps discussed earlier and that's how we will get our sorted array as seen in the image below:

![Sorted Array](https://github.com/Tayeb-Ahmed-TAS/Images/blob/7f3df16be97e6fd5fc6f7b9bf699687c5a809340/repeating-the-steps.png)

## Algorithm

After having a detailed explanation about the introduction and working of insertion sort C++. Now, let's discuss the algorithm used for its implementation.

```cpp

Step - 1. Start from the second element of the array.

Step - 2. Compare the current element with the previous element.

Step - 3. If the current element is smaller than the previous element, then compare it with the previous element.

Step - 4. If the current element is smaller than the previous element, then swap the current element with the previous element.

Step - 5. Repeat the above steps until the current element is greater than the previous element.

Step - 6. Repeat the above steps for all the elements of the array.

Step - 7. Finally, the array will be sorted.

```

## Time Complexity

The time complexity of the insertion sort algorithm is O(n^2). Because the algorithm has two nested loops, each of which iterates n times.

## Space Complexity

The space complexity of the insertion sort algorithm is O(1) because the algorithm doesn't use any extra space for sorting.
