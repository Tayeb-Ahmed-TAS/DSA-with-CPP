# Bubble Sort

## How it works?

[![Bubble Sort](https://github.com/Tayeb-Ahmed-TAS/Images/blob/main/how-does-bubble-sort-algorithm-w.png)

From the above-given diagram, we can infer the following conclusions about the bubble sort algorithm –

1. In bubble sort, to sort a list of size n, we need to perform n – 1 iterations. Notice we had 4 elements with us, and we got the sorted list in 3 passes. This is because each time we iterate over the list, an element gets sorted. This element is left in the next iteration of the loop. While we reach the (n – 1)th iteration, we are only left with one number. And, since a minimum of two numbers is required for comparison, that number can not be compared further.

2. In the first pass, the highest element (5 in this case) was bubbled out on the right side of the list. Similarly, after each iteration, the largest among the unsorted elements was placed at its position. This is the reason why this sorting algorithm is known as bubble sort.

3. In the second pass, we did not compare elements 4 and 5. This is because we know that 5 is already at its correct position, and comparing them would not make any difference. Same for 3 & 4 and 4 & 5 in the third pass. In each pass, comparison occurs up to the last unsorted element. This way we can reduce the number of comparisons.

4. Element 2 took a significant number of passes to arrange itself at its position in the sorted list. Thus, if any element of the list takes more passes, it is known as the turtle. Whereas element 5 took only one pass to reach its position, which is rare for bubble sort. Such elements are known as rabbits due to a low number of passes.
