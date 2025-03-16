# Bit Manipulation

## 1. Bit Manipulation Basics

### 1.1. Bitwise Operators

i. Binary **& (AND)**: Sets each bit to 1 if both bits are 1.

ii. Binary **| (OR)**: Sets each bit to 1 if one of two bits is 1.

iii. Binary **^ (XOR)**: Sets each bit to 1 if only one of two bits is 1.

iv. Binary **~ (NOT)**: Inverts all the bits.

v. Binary **<< (Left Shift)**: Shifts left by pushing zeros in from the right and let the leftmost bits fall off.

vi. Binary **>> (Right Shift)**: Shifts right by pushing copies of the leftmost bit in from the left, and let the rightmost bits
fall off.

vii. Binary One's Complement **(~)**: The one's complement of a binary number is the value obtained by inverting all the bits in the binary representation of the number (swapping 0s for 1s and vice versa).

viii. Binary Two's Complement: The two's complement of a binary number is the value obtained by subtracting the number from 2^n, where n is the number of bits in the binary representation of the number.

## Binary AND (&) Operator

The **&** operator is a bitwise operator that performs a bitwise AND operation between two integers. The result of the operation is a new integer where each bit is set to 1 only if both bits in the corresponding input integers are 1.

The following table shows the result of the **&** operation for all possible combinations of two bits:

| A | B | A & B |
|---|---|-------|
| 0 | 0 | 0     |
| 0 | 1 | 0     |
| 1 | 0 | 0     |
| 1 | 1 | 1     |

### Example

```cpp

5 & 7 = 5

5 = 0 0 0 0 0 1 0 1
7 = 0 0 0 0 0 1 1 1
---------------------
    0 0 0 0 0 1 0 1 = 5

// It calculates at the bit level.
// That means it calculates the AND of each bit of the two numbers.

```

## Binary OR (|) Operator

The **|** operator is a bitwise operator that performs a bitwise OR operation between two integers. The result of the operation is a new integer where each bit is set to 1 if at least one of the bits in the corresponding input integers is 1.

The following table shows the result of the **|** operation for all possible combinations of two bits:

| A | B | A \| B |
|---|---|--------|
| 0 | 0 | 0      |
| 0 | 1 | 1      |
| 1 | 0 | 1      |
| 1 | 1 | 1      |

### Example

```cpp

5 | 7 = 7

5 = 0 0 0 0 0 1 0 1
7 = 0 0 0 0 0 1 1 1
---------------------
    0 0 0 0 0 1 1 1 = 7

// It calculates at the bit level.
// That means it calculates the OR of each bit of the two numbers.

```

## Binary XOR (^) Operator

XOR is also known as the exclusive OR. The **^** operator is a bitwise operator that performs a bitwise XOR operation between two integers. The result of the operation is a new integer where each bit is set to 1 only if one of the bits in the corresponding input integers is 1.

***That means if both the bits are the same, the result is 0. If the bits are different, the result is 1.***

The following table shows the result of the **^** operation for all possible combinations of two bits:

| A | B | A ^ B |
|---|---|-------|
| 0 | 0 | 0     |
| 0 | 1 | 1     |
| 1 | 0 | 1     |
| 1 | 1 | 0     |

### Example

```cpp

5 ^ 7 = 2

5 = 0 0 0 0 0 1 0 1
7 = 0 0 0 0 0 1 1 1
---------------------
    0 0 0 0 0 0 1 0 = 2

// It calculates at the bit level.
// That means it calculates the XOR of each bit of the two numbers.

```

## Binary NOT (~) Operator

The **~** operator is a bitwise operator that performs a bitwise NOT operation on a single integer. The result of the operation is a new integer where each bit is inverted.

This number is the two's complement of the number. It is calculated by inverting all the bits of the number.

This number could be a negative number. Beacuse the most significant bit of the number is the sign bit. If the sign bit is 1, the number is negative. If the sign bit is 0, the number is positive.

The following table shows the result of the **~** operation for all possible bits:

| A | ~A |
|---|----|
| 0 | 1  |
| 1 | 0  |

### Example

```cpp

~5 = -6

 5 = 0 0 0 0 0 1 0 1
~5 = 1 1 1 1 1 0 1 0 = -6

// It calculates at the bit level.
// That means it calculates the NOT of each bit of the number.
// Here all the bits are inverted.
// All the 0 becomes 1 and all the 1 becomes 0.

```

**Note:** The result of the **~** operation is the two's complement of the number.

### Example 2

```cpp

int a = 0;

cout << ~a << endl; // -1

```

Here the value of a is 0. 0 is represented as 32 bits in the memory. When we do the NOT operation on 0, all the bits are inverted. So, the result is -1.

000... ...00 -> 32 bits

111... ...11 -> 32 bits

## Binary Left Shift (<<) Operator

The **<<** operator is a bitwise operator that performs a bitwise left shift operation on an integer. The result of the operation is a new integer where the bits are shifted to the left by a specified number of positions.

The left shift operation is equivalent to multiplying the number by 2^n, where n is the number of positions to shift.

### Example

```cpp

5 << 2 = 20

     5 = 0 0 0 0 0 1 0 1
5 << 2 = 0 0 0 1 0 1 0 0 = 20

// That means it shifts all the bits to the left by 2 positions.
// Last two bits are filled with 0s.
// It is equivalent to multiplying the number by 2^2 = 4.

```

### Explanation

```Explanation

    a << b  is equivalent to  a * 2^b

    That means, 

        a << b = a * 2^b

    Same as,

        5 << 2 = 5 * 2^2 = 5 * 4 = 20

```

## Binary Right Shift (>>) Operator

The **>>** operator is a bitwise operator that performs a bitwise right shift operation on an integer. The result of the operation is a new integer where the bits are shifted to the right by a specified number of positions.

The right shift operation is equivalent to dividing the number by 2^n, where n is the number of positions to shift.

### Example

```cpp

20 >> 2 = 5

     20 = 0 0 0 1 0 1 0 0
20 >> 2 = 0 0 0 0 0 1 0 1 = 5

// That means it shifts all the bits to the right by 2 positions.
// First two bits from the right are removed.
// It is equivalent to dividing the number by 2^2 = 4.

```

### Explanation

```Explanation

    a >> b  is equivalent to  a / 2^b

    That means, 

        a >> b = a / 2^b

    Same as,

        20 >> 2 = 20 / 2^2 = 20 / 4 = 5

```

## 1.2. Bit Manipulation Tricks

### 1.2.1. Check if a Number is Even or Odd

To check if a number is even or odd, we can use the bitwise AND operator **&**.

***If the last bit of the number is 0, then the number is even. If the last bit of the number is 1, then the number is odd.***

### Explanation

```Explanation

5 is an odd number.

Because 5 is represented as 0 0 0 0 0 1 0 1.

The last bit of the number is 1. So, 5 is an odd number.

```

```Explanation

Same way,

6 is an even number.

Because 6 is represented as 0 0 0 0 0 1 1 0.

Where the last bit of the number is 0. So, 6 is an even number.

```

**```We can clearly see that the last bit of any number decides whether the number is even or odd.```**

### Example

```cpp

int a = 5;

if (a & 1) {
    cout << "Odd" << endl;
} else {
    cout << "Even" << endl;
}

```

### Output

```Output

Odd

```

### Explanation of the Example

```Explanation

      5 = 0 0 0 0 0 1 0 1
    & 1 = 0 0 0 0 0 0 0 1
    ---------------------
          0 0 0 0 0 0 0 1

The last bit of the result is 1. So, the number is odd.

Same ways,

          6 = 0 0 0 0 0 1 1 0
        & 1 = 0 0 0 0 0 0 0 1
        ---------------------
              0 0 0 0 0 0 0 0

The last bit of the result is 0. So, the number is even.

```

### 1.2.2. Common Operations

#### 1.2.2.1 Get ith Bit

To get the ith bit of a number, we can use the bitwise AND operator **&**.

***If the result of the operation is 1, then the ith bit of the number is 1. If the result of the operation is 0, then the ith bit of the number is 0.***

### Bit Position

```Bit Position

Position:  7 6 5 4 3 2 1 0
     5 ->  0 0 0 0 0 1 0 1

```

### Example

```cpp

int a = 5; // 0 0 0 0 0 1 0 1

int i = 2; // Position of the bit

int mask = 1 << i; // 0 0 0 0 0 1 0 0

if (a & mask) {
    cout << 1 << endl;
} else {
    cout << 0 << endl;
}

```

### Output

```Output

1

```

### Explanation of the Example

```Explanation

We Know,

        5 = 0 0 0 0 0 1 0 1
        1 = 0 0 0 0 0 0 0 1

For the number 5, the 2nd bit is 1.

               5 = 0 0 0 0 0 1 0 1
        & 1 << 2 = 0 0 0 0 0 1 0 0
        ---------------------------
                   0 0 0 0 0 1 0 0

The result is 1. So, the 2nd bit of the number 5 is 1.

Same way,

For the number 5, the 1st bit is 0.

               5 = 0 0 0 0 0 1 0 1
        & 1 << 1 = 0 0 0 0 0 0 1 0
        ---------------------------
                   0 0 0 0 0 0 0 0

The result is 0. So, the 1st bit of the number 5 is 0.


```

#### 1.2.2.2 Set ith Bit

To set the ith bit of a number, we can use the bitwise OR operator **|**.

***If the result of the operation is 1, then the ith bit of the number is set to 1. If the result of the operation is 0, then the ith bit of the number is set to 0.***

### Bit Position

```Bit Position

Position:  7 6 5 4 3 2 1 0
     5 ->  0 0 0 0 0 1 0 1

```

### Example

```cpp

int a = 5; // 0 0 0 0 0 1 0 1

int i = 3; // Position of the bit

int mask = 1 << i; // 0 0 0 0 1 0 0 0

a = a | mask; // 0 0 0 0 1 1 0 1

cout << a << endl;

```

### Output

```Output

13

```

### Explanation of the Example

```Explanation

We Know,

        5 = 0 0 0 0 0 1 0 1
        1 = 0 0 0 0 0 0 0 1

For the number 5, the 3rd bit is 0.

               5 = 0 0 0 0 0 1 0 1
        | 1 << 3 = 0 0 0 0 1 0 0 0
        ---------------------------
                   0 0 0 0 1 1 0 1

The result is 13. because, the 3rd bit of the number 5 is set to 1.

```
