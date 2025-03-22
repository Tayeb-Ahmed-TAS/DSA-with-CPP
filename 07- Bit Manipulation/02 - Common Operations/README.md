# 1.2.2. Common Operations

## 1.2.2.1 Get ith Bit

To get the ith bit of a number, we can use the bitwise AND operator **&**.

**_If the result of the operation is 1, then the ith bit of the number is 1. If the result of the operation is 0, then the ith bit of the number is 0._**

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
     1<<2 = 0 0 0 0 0 1 0 0

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

---

## 1.2.2.2 Set ith Bit

To set the ith bit of a number, we can use the bitwise OR operator **|**.

**_If the result of the operation is 1, then the ith bit of the number is set to 1. If the result of the operation is 0, then the ith bit of the number is set to 0._**

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
     1<<3 = 0 0 0 0 1 0 0 0

For the number 5, the 3rd bit is 0.

               5 = 0 0 0 0 0 1 0 1
        | 1 << 3 = 0 0 0 0 1 0 0 0
        ---------------------------
                   0 0 0 0 1 1 0 1

The result is 13. because, the 3rd bit of the number 5 is set to 1.

```

---

## 1.2.2.3 Clear ith Bit

To clear the ith bit of a number, we can use the bitwise AND operator **&**.

**_If the result of the operation is 1, then the ith bit of the number is 1. If the result of the operation is 0, then the ith bit of the number is 0._**

We can use the bitwise NOT operator **~** to create the mask. Because the NOT operator inverts all the bits of the number. So that we can create a mask with all the bits set to 1 except the ith bit. As a result, the ith bit of the mask is 0.

### Example

```cpp

int a = 13; // 0 0 0 0 1 1 0 1

int i = 3; // Position of the bit

int mask = ~(1 << i); // 1 1 1 1 0 1 1 1

a = a & mask; // 0 0 0 0 0 1 0 1

cout << a << endl;

```

### Output

```Output

5

```

### Explanation of the Example

```Explanation

We Know,

        13 = 0 0 0 0 1 1 0 1
         1 = 0 0 0 0 0 0 0 1
      1<<3 = 0 0 0 0 1 0 0 0
     ~1<<3 = 1 1 1 1 0 1 1 1

For the number 13, the 3rd bit is 1.

                 13 = 0 0 0 0 1 1 0 1
        & ~(1 << 3) = 1 1 1 1 1 0 1 1
        ------------------------------
                      0 0 0 0 0 1 0 1

The result is 5. because, the 3rd bit of the number 13 is cleared.

```

---

## 1.2.2.4 Update ith Bit

We've to combine the set and clear operations to update the ith bit of a number.

### Example

```cpp

int a = 13; // 0 0 0 0 1 1 0 1

int i = 4; // Position of the bit

int v = 1; // Value to set 0 or 1 (0 0 0 0 0 0 0 1)

// Clear the ith bit

int mask = ~(1 << i); // 1 1 1 0 1 1 1 1

a = a & mask; // 0 0 0 0 1 1 0 1

// Set the ith bit (update)

mask = v << i; // 0 0 0 1 0 0 0 0

a = a | mask; // 0 0 0 1 1 1 0 1

cout << a << endl;

```

### Output

```Output

29

```

### Explanation of the Example

```Explanation

We Know,

        13 = 0 0 0 0 1 1 0 1
         1 = 0 0 0 0 0 0 0 1
      1<<4 = 0 0 0 1 0 0 0 0 (for 1 << i)
     ~1<<4 = 1 1 1 0 1 1 1 1 (for ~(1 << i))
      1<<4 = 0 0 0 1 0 0 0 0 (for v << i)

Now for clear ith bit,

                     13 = 0 0 0 0 1 1 0 1
            & ~(1 << 4) = 1 1 1 0 1 1 1 1
            ------------------------------
                          0 0 0 0 1 1 0 1 (for a & mask) = 13

Now for set ith bit (update),

                        13 = 0 0 0 0 1 1 0 1
                    | 1<<4 = 0 0 0 1 0 0 0 0
                ------------------------------
                            0 0 0 1 1 1 0 1 (for a | mask) = 29

The result is 29. because, the 4th bit of the number 13 is updated to 1.

```

---

## 1.2.2.5 Clear Last i Bits

To clear the last i bits of a number, we can use the bitwise AND operator **&**.

### Expected Output

```Expected Output

Clear the last 3 bits of 13.

            13 = 0 0 0 0 1 1 0 1
            i  = 3

After clearing the last 3 bits,

            0 0 0 0 1 0 0 0 = 8

After clearing the last 3 bits, the number new number is 8.

```

**For this, we can create a mask with the last i bits set to 0 and the remaining bits set to 1.**

### Example

```cpp

int a = 13; // 0 0 0 0 1 1 0 1

int i = 3; // Number of bits to clear

int mask = -1 << i; // 1 1 1 1 1 0 0 0

a = a & mask; // 0 0 0 0 1 0 0 0

cout << a << endl;

```

### Output

```Output

8

```

### Explanation of the Example

```Explanation

We Know,

           13 = 0 0 0 0 1 1 0 1
           -1 = 1 1 1 1 1 1 1 1
        -1<<3 = 1 1 1 1 1 0 0 0 (for -1 << i)

For the number 13, the last 3 bits are 101.

               13 = 0 0 0 0 1 1 0 1
        & -1 << 3 = 1 1 1 1 1 0 0 0
        ---------------------------
                   0 0 0 0 1 0 0 0

The result is 8. because, the last 3 bits of the number 13 are cleared.

```

---

## 1.2.2.6 Clear Range of Bits

To clear a range of bits from **i** to **j** of a number, we can use the bitwise AND operator **&**.

### Expected Output

```Expected Output

Clear the bits from 1 to 3 of 13 from the right.

    bit position:  7 6 5 4 3 2 1 0
              13 = 0 0 0 0 1 1 0 1
              i  = 1
              j  = 3

After clearing the bits from 1 to 3,

            0 0 0 0 0 0 0 1 = 1

After clearing the bits from 1 to 3, the number new number is 1.

```

**For this, we can create a mask with the bits from **i** to **j** set to 0 and the remaining bits set to 1.**

The mask can be created by taking the bitwise OR of two masks.

1. Create a mask that contains 1s from the leftmost bit to **j** and 0s from **j+1** to the rightmost bit. (That means we have **j+1** number of 0s here)
2. Create a mask that contains 1s from the rightmost bit to **i** and 0s from **i-1** to the leftmost bit. (That means we have **i** number of 0s here)
3. Take the bitwise OR of the two masks.

### Example

```cpp

int a = 13; // 0 0 0 0 1 1 0 1

int i = 1; // Starting bit position

int j = 3; // Ending bit position

int mask1 = -1 << (j + 1); // 1 1 1 1 1 0 0 0

int mask2 = (1 << i) - 1; // 0 0 0 0 0 0 0 1

int mask = mask1 | mask2; // 1 1 1 1 0 0 0 1

a = a & mask; // 0 0 0 0 0 0 0 1

cout << a << endl;

```

### Output

```Output

1

```

### Explanation of the Example

```Explanation

We Know,

Bit Position:   7 6 5 4 3 2 1 0
           13 = 0 0 0 0 1 1 0 1
           -1 = 1 1 1 1 1 1 1 1
        -1<<4 = 1 1 1 1 0 0 0 0 (for -1 << (j + 1)) = mask1
                                     -1 << (3 + 1)
                                     -1 << 4

Again,

               1 = 0 0 0 0 0 0 0 1
            1<<1 = 0 0 0 0 0 0 1 0
             1-1 = 0 0 0 0 0 0 0 1 (for (1 << i) - 1) = mask2

Now,

        mask1 = 1 1 1 1 0 0 0 0
        mask2 = 0 0 0 0 0 0 0 1
        mask  = 1 1 1 1 0 0 0 1 (for mask1 | mask2)

For the number 13, the bits from 1 to 3 are 101.

               13 = 0 0 0 0 1 1 0 1
           & mask = 1 1 1 1 0 0 0 1
        --------------------------------
                    0 0 0 0 0 0 0 1 = 1

The result is 1. because, the bits from 1 to 3 of the number 13 are cleared.

```

---
