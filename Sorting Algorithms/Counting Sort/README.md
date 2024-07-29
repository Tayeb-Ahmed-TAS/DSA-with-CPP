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

![Count Array 1](https://github.com/Tayeb-Ahmed-TAS/Images/blob/bc5d366ddb8fe86cea9300db3480cc756a69a340/count%20array%201.png)

4. Calculate the cumulative **sum** of the elements in the count array. This cumulative **sum** assists in correctly positioning the elements in the sorted array.

![Count Array 2](https://github.com/Tayeb-Ahmed-TAS/Images/blob/bc5d366ddb8fe86cea9300db3480cc756a69a340/count%20array%202.png)

5. Determine the index of each element from the original array in the count array, yielding the cumulative count. Place each element at the calculated index position in the sorted array, as illustrated in the figure below.

![Sorted Array](https://github.com/Tayeb-Ahmed-TAS/Images/blob/bc5d366ddb8fe86cea9300db3480cc756a69a340/sorted%20array.png)
