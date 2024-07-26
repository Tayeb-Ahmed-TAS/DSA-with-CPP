# Insertion Sort

Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands. It is a comparison-based algorithm that builds a final sorted list one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

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

```algorithm
