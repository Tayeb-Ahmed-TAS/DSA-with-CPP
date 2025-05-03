# Merge Sort

Merge Sort is a divide-and-conquer algorithm that sorts an array by recursively dividing it into two halves, sorting each half, and then merging the sorted halves back together. It is known for its efficiency and stability, making it a popular choice for sorting large datasets.

## How it works?

1. **Divide**: The array is divided into two halves until each half contains a single element.

2. **Conquer**: Each half is sorted recursively using the same merge sort algorithm.

   - MergeSort(Left) and MergeSort(Right).

   - Left part is `Start` to `Mid` and Right part is `Mid + 1` to `End`.

   - mid is calculated as `(Start + End) / 2`.

3. **Combine**: The sorted halves are merged back together to form a single sorted array.

   - Merge(Left, Right).
   - The merging process involves comparing the elements of the two halves and arranging them in sorted order.
   - We need 2 pointers `i` and `j` and a `temporary array` to store the merged result.
   - In the temporary array, we will store the elements in sorted order.

### Illustration

![Merge Sort](https://github.com/Tayeb-Ahmed-TAS/Images/blob/main/mergesort.png)

### Let's understand the above illustration step by step with the help of a table

| Pass Number | Unsorted Array         | Divide / Merge         | Sorted Array         |
| ----------- | ---------------------- | ---------------------- | -------------------- |
| 1           | {6, 4, 15, 7, 2}       | {6, 4}, {15, 7, 2}     | {}                   |
| 2           | {6, 4}, {15, 7, 2}     | {6}, {4}, {15}, {7, 2} | {}                   |
| 3           | {6}, {4}, {15}, {7, 2} | {4, 6}, {15}, {7}, {2} | {4, 6}               |
| 4           | {4, 6}, {15}, {7}, {2} | {4, 6}, {15}, {2, 7}   | {4, 6}, {15}, {2, 7} |
| 5           | {4, 6}, {15}, {2, 7}   | {4, 6}, {2, 7, 15}     | {4, 6}, {2, 7, 15}   |
| 6           | {4, 6}, {2, 7, 15}     | {2, 4, 6, 7, 15}       | {2, 4, 6, 7, 15}     |
| 7           | {}                     | {}                     | {2, 4, 6, 7, 15}     |
