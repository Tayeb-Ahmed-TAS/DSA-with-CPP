# Bubble Sort

## How it works?

![Bubble Sort](https://github.com/Tayeb-Ahmed-TAS/Images/blob/main/how-does-bubble-sort-algorithm-w.png)

From the above-given diagram, we can infer the following conclusions about the bubble sort algorithm –

1. In bubble sort, to sort a list of size n, we need to perform ***n – 1*** iterations. Notice we had 4 elements with us, and we got the sorted list in 3 passes. This is because each time we iterate over the list, an element gets sorted. This element is left in the next iteration of the loop. While we reach the ***(n – 1)*** th iteration, we are only left with one number. And, since a minimum of two numbers is required for comparison, that number can not be compared further.

2. In the first pass, the highest element (5 in this case) was bubbled out on the right side of the list. Similarly, after each iteration, the largest among the unsorted elements was placed at its position. This is the reason why this sorting algorithm is known as bubble sort.

3. In the second pass, we did not compare elements 4 and 5. This is because we know that 5 is already at its correct position, and comparing them would not make any difference. Same for 3 & 4 and 4 & 5 in the third pass. In each pass, comparison occurs up to the last unsorted element. This way we can reduce the number of comparisons.

4. Element 2 took a significant number of passes to arrange itself at its position in the sorted list. Thus, if any element of the list takes more passes, it is known as the turtle. Whereas element 5 took only one pass to reach its position, which is rare for bubble sort. Such elements are known as rabbits due to a low number of passes.

## Algorithm

```cpp
We know that to sort a list of n elements using bubble sort, we need to perform n – 1 iterations. And for each iteration, we need to:

1. Run a loop over the entire list or array.

2. Compare the element at the index i with the element at i + 1.

3. If the element at i is greater than the element at i + 1, swap both the elements

4. Else, move to the next element.

```

``` cpp

begin bubbleSort(list)
 
for i = 0 to sizeof(list) - 1    
    for j = 0 to sizeof(list) - i - 1
        if list[j] > list[j+1]
             swap(list[i], list[i+1])
        end if
    end for
end for
 
end bubbleSort

```

## Pseudocode

```cpp
// Optimized Bubble sort in C++
// perform the bubble sort
void bubbleSort(int arr[], int n) {
 
  // loop over array elements
  for (int i = 1; i <= n - 1; ++i) {
    
    // loop to compare array elements
    for (int j = 0; j <= n - i - 1; ++j) {
      
      // compare adjacent elements
      if (arr[j] > arr[j + 1]) {
        
      // swap if out-of-order
     // using swap() method for swapping
        swap(arr[j], arr[j+1]);
      }
    }
  }
}
```

### Why i < n - 1?

- Here i is times (The number of iterations) we need to perform to sort the list.
- The reason for this is that to sort a list of n elements, we need to perform n – 1 iterations.
- That means we'll if we have 4 elements, we need to perform 3 iterations to sort the list.
- And the index starts from 1, so the last index will be n - 1.
- So, we need to perforn n - 1 iterations to sort the list.

### Why j <= n - i - 1?

The reason for this is that after each iteration, the largest element among the unsorted elements is placed at its correct position. So, we don’t need to compare it again. This is why we reduce the number of comparisons by one after each iteration.

We can see from the diagram above,

1. In the first pass, we compare 3 times (n-1 here, n = 4 & i = 0 so 4-1 = 3 and n-i-1 = 4-0-1 = 3)

2. In the second pass, we compared all the elements except the last one. That means we compare 2 times (n-2 here, n = 4 & i = 1 so 4-2 = 2 and n-i-1 = 4-1-1 = 2)

3. In the third pass, we compared all the elements except the last two. That means we compare 1 time (n-3 here, n = 4 & i = 2 so 4-3 = 1 and n-i-1 = 4-2-1 = 1)

That’s why we use j < n - i - 1 in the inner loop.
