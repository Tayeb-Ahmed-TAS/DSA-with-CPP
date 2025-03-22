# 1.2.3. Bit Manipulation Problems

## 1.2.3.1 Replace Bits in N by M

### Problem Statement

You are given two 32-bit numbers, N and M, and two bit positions i and j.

Write a method to set all bits between i and j in N equal to M.

M (becomes a substring of N locationed at and starting at j).

### Example

```cpp

N = 10000000000;

M = 10101;

i = 2, j = 6

Output : 10001010100

```

### Solution

For this problem,

1. At first, we need to clear the bits between i and j in N and then set the bits of M at the same position.

2. To set the bits of M at the same position, we need to left shift M by i positions.

3. After that, we need to perform an OR operation between the left-shifted M and cleared N.

```cpp

void clearBitsInRange(int &n, int i, int j) {
  int mask1 = (-1 << (j + 1));
  int mask2 = (1 << i) - 1;
  int mask = mask1 | mask2;

  n = n & mask;
}

void replaceBits(int &n, int m, int i, int j) {
  clearBitsInRange(n, i, j);
  int mask = m << i;
  n = n | mask;
}

int main() {
  int n = 1024; // 10000000000
  int m = 21;  // 10101
  int i = 2;  // Starting from 2nd bit
  int j = 6; // Ending at 6th bit

  replaceBits(n, m, i, j);

  cout << n << endl;

  return 0;
}

```

### Output

```cpp

1108

```

### Explanation

```cpp

Let, n = 15;
     m = 2;
     i = 1;
     j = 3;

We know,

  Bit Poisition =  7 6 5 4 3 2 1 0
            n   =  0 0 0 0 1 1 1 1
            m   =  0 0 0 0 0 0 1 0

After clearing the bits between i and j in n,

    Bit Poisition   =  7 6 5 4 3 2 1 0
                n   =  0 0 0 0 0 0 0 1

After left shifting m by i positions,

    Bit Poisition   =  7 6 5 4 3 2 1 0
                m   =  0 0 0 0 0 1 0 0

After performing OR (|) operation between left-shifted m and cleared n,

                  n  =  0 0 0 0 0 0 0 1
                | m  =  0 0 0 0 0 1 0 0
                -----------------------
                  n  =  0 0 0 0 0 1 0 1

The new value of n is 5.

```

----------------------------------------

## 1.2.3.2 Power of Two

### Problem Statement

Given an integer, write a function to determine if it is a power of two.

### Example

```cpp

Input 1  : 16

Output 1 : true

Input 2  : 218

Output 2 : false

```

### Solution

For this problem,

1. If N is a power of 2, then N & (N - 1) will be 0.

2. If N is not a power of 2, then N & (N - 1) will not be 0.

Beacuse,

- Let N = 16, then N - 1 = 15.

- 16 is look like 10000 and 15 is look like 01111.

- N & (N - 1) = 00000.

- As the result is 0 so, 16 is a power of 2.

Similarly,

- Let N = 15, then N - 1 = 14.

- 15 is look like 01111 and 14 is look like 01110.

- N & (N - 1) = 01110.

- As the result is not 0 so, 15 is not a power of 2.

```cpp

int n = 16;

if ((n & (n - 1)) == 0) {
  cout << "Power of 2" << endl;
} else {
  cout << "Not power of 2" << endl;
}

```

`or,`

```cpp

bool isPowerOfTwo(int n) {
  return n > 0 && (n & (n - 1)) == 0;
}

int main() {
  int n = 16;

  if (isPowerOfTwo(n)) {
    cout << "Power of 2" << endl;
  } else {
    cout << "Not power of 2" << endl;
  }

  return 0;
}

```

### Output

```cpp

Power of 2

```

### Explanation

```cpp

Let, n = 16;

We know,

        N   = 16 = 0 0 0 1 0 0 0 0
        N-1 = 15 = 0 0 0 0 1 1 1 1
      --------------------------------
N & (N - 1) =  0 = 0 0 0 0 0 0 0 0

As the result is 0 so, 16 is a power of 2.

Similarly,

Let, n = 15;

We know,

        N   = 15 = 0 0 0 0 1 1 1 1
        N-1 = 14 = 0 0 0 0 1 1 1 0
      --------------------------------
N & (N - 1) = 14 = 0 0 0 0 1 1 1 0

As the result is not 0 so, 15 is not a power of 2.

```

----------------------------------------

## 1.2.3.3 Count Set Bits

### Problem Statement

Write a function that takes an integer and returns the number of bits that are set to 1 in the integer.

### Example

```cpp

Input 1  : 15 // 1111

Output 1 : 4

Input 2  : 16 // 10000

Output 2 : 1

```

### Solution

For this problem,

1. We can count the number of set bits in an integer by using the & operator.

2. We can perform an AND operation between the number and 1.

3. Then we can increment the count.

4. If the result is 1, then the count will be incremented.

5. If the result is 0, then the count will not be incremented.

6. After that, we can right shift the number by 1.

7. We can repeat the process until the number becomes 0.

### Example

```cpp

int count_bits(int n){
  int count = 0;

  while(n>0){

    int last_bit = n & 1;

    count += last_bit;

    n = n >> 1;

  }

  return count;
}

```

`or,`

```cpp

int count_bits(int n){
  int count = 0;

  while(n>0){

    count += n & 1;

    n = n >> 1;

  }

  return count;
}

```

**Note: For number n, the loop will run for log(n) times.**

### Complexity

- Time complexity: **O(log(n))**

- Space complexity: **O(1)**

----------------------------------------
