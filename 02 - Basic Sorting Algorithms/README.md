# Sorting Algorithms

## What is Sorting?

Sorting is the process of arranging elements in a specific order.

The most common order is numerical order, but sorting can be applied to any data type that has a defined order relation.

## What is a Sorting Algorithm?

A sorting algorithm is an algorithm that takes an array or a list as input and outputs the same array or list in a sorted order (Increasing Order or Decreasing Order).

## Some Sorting Algorithms

1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
5. Quick Sort
6. Heap Sort
7. Counting Sort

## Time & Space Complexity

|Algorithms|Time Complexity|Space Complexity|
|---|---|---|
|Bubble Sort|O(n^2)|O(1)|
|Selection Sort|O(n^2)|O(1)|
|Insertion Sort|O(n^2)|O(1)|
|Merge Sort|O(n log n)|O(n)|
|Quick Sort|O(n log n)|O(log n)|
|Heap Sort|O(n log n)|O(1)|
|Counting Sort|O(n + k)|O(n + k)|
|In-Built Sort|O(n log n)|O(n)|

## Which Sorting Algorithm is Best?

It depends on the size of the input array and the type of data.

- **For general-purpose sorting:** Quick Sort (or Tim Sort for built-in sorting functions).
- **For large datasets with stability needs:** Merge Sort.
- **For nearly sorted data:** Insertion Sort.
- **For small datasets:** Insertion Sort or Selection Sort.
- **For integer sorting within a known range:** Counting Sort or Radix Sort.
