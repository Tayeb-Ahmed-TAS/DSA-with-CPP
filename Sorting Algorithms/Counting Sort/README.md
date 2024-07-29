# Counting Sort

Counting Sort Algorithm is a sorting algorithm that works best when you have a **small range of numbers** to sort.

Instead of comparing elements like in other sorting methods, it counts how many times each number appears and then puts them in order based on that count.

This makes it really fast when the range of numbers is not too big compared to the total number of items to be sorted.

## How it works?

1. Determine the maximum element, denoted as ***"max"*** from the provided array.

![Given Array](https://github.com/Tayeb-Ahmed-TAS/Images/blob/bc5d366ddb8fe86cea9300db3480cc756a69a340/given%20array.png)

2. Create an array of length ***"max+1"*** with all elements initialized to 0. This array serves the purpose of storing the count of each element present in the given array.

![Count Array](https://github.com/Tayeb-Ahmed-TAS/Images/blob/bc5d366ddb8fe86cea9300db3480cc756a69a340/count%20array.png)

3. Assign the count of each element to their corresponding **index** in the count array.

    - In the figure below, the lower numbers represents the array elements.
    - And the upper numbers represents the count of the corresponding element. That means how many times the element appears in the given array.
    - For example, The array don't have any ``0``, ``5`` and ``6``. That's why The count of ``0``, ``5`` and ``6`` is **0**.
    - On the other hand, The array has ``1`` **2** times, ``2`` **1** time, ``3`` **2** times, ``4`` **2** times, ``7`` **2** times. So the count of ``1``, ``2``, ``3``, ``4`` and ``7`` is **2**, **1**, **2**, **2** and **2** respectively.

![Count Array 1](https://github.com/Tayeb-Ahmed-TAS/Images/blob/bc5d366ddb8fe86cea9300db3480cc756a69a340/count%20array%201.png)

4. Calculate the cumulative **sum** of the elements in the count array. This cumulative **sum** assists in correctly positioning the elements in the sorted array.

![Count Array 2](https://github.com/Tayeb-Ahmed-TAS/Images/blob/bc5d366ddb8fe86cea9300db3480cc756a69a340/count%20array%202.png)

5. Determine the index of each element from the original array in the count array, yielding the cumulative count. Place each element at the calculated index position in the sorted array, as illustrated in the figure below.

![Sorted Array](https://github.com/Tayeb-Ahmed-TAS/Images/blob/bc5d366ddb8fe86cea9300db3480cc756a69a340/sorted%20array.png)

6. Finally, the sorted array is obtained.

## Algorithm

```cpp

Step 1 :  Find the maximum element in the array and store it in max.
Step 2 :  Create a count array of size max+1 and initialize all elements to 0.
Step 3 :  Traverse the array and increase the count of each element by 1.
Step 4 :  Calculate the cumulative sum of the count array.
Step 5 :  Determine the index of each element from the original array in the count array,
          yielding the cumulative count.
Step 6 :  Place each element at the calculated index position in the sorted array.
Step 7 :  The sorted array is obtained.

```

## Where is it used?

- Counting Sort is used when the range of numbers in the array is known and is not significantly greater than the number of elements to be sorted.

- Ex: Exam scores of students in a class, where the highest score is 100.

## Time Complexity

The time complexity of the Counting Sort Algorithm is ***O(Range + N)***

## Space Complexity

The space complexity of the Counting Sort Algorithm is ***O(Range)***
