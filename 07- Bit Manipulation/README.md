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
