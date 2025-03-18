# Spiral Pattern

Write a function that takes n x m 2D Array, and prints the all array elements in a spiral order. Start from top left corner goes to right, proceeds in a spiral pattern until every element has been visited.

## Input

```cpp

1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16

```

## Output

```cpp

1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

```

![Spiral](https://github.com/Tayeb-Ahmed-TAS/Images/blob/d80b5a5bb9eb92566e41dabb7c40d617bbcf01ef/spiral.png)

## How to solve

To solve this problem, we need 4 variables (StartRow, EndRow, StartCol, EndCol).

![Spiral Solve 1](https://github.com/Tayeb-Ahmed-TAS/Images/blob/b85dec2c48ab09b6073037ba2b54fa2d98b3eebe/spiral1.png)

1. StartRow = 0, EndRow = row-1, StartCol = 0, EndCol = col-1

2. Loop until StartRow <= EndRow and StartCol <= EndCol

    1. Print the elements of StartRow from StartCol to EndCol `StartRow(StartCol to EndCol)`

    2. Then Print the elements of EndCol from StartRow+1 to EndRow `EndCol(StartRow+1 to EndRow)`

    3. Then Print the elements of EndRow from EndCol-1 to StartCol `EndRow(EndCol-1 to StartCol)`

    4. Then Print the elements of StartCol from EndRow-1 to StartRow+1 `StartCol(EndRow-1 to StartRow+1)`

3. Updating the variables to print the inner spiral

    1. StartRow++

    2. EndRow--

    3. StartCol++

    4. EndCol--

4. Repeat the above steps until StartRow <= EndRow and StartCol <= EndCol

## Identify Rows and Columns for better understanding

- Identify the rows by following figure

![Rows](https://github.com/Tayeb-Ahmed-TAS/Images/blob/0c60d3fb2fdc326a8bd3cb7800babb4350e363da/rows.png)

- Identify the columns by following figure

![Columns](https://github.com/Tayeb-Ahmed-TAS/Images/blob/0c60d3fb2fdc326a8bd3cb7800babb4350e363da/Columns.png)
