# Merge Sort

Merge Sort is a divide-and-conquer algorithm that sorts an array by recursively dividing it into two halves, sorting each half, and then merging the sorted halves back together. It is known for its efficiency and stability, making it a popular choice for sorting large datasets.

## How it works?

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
