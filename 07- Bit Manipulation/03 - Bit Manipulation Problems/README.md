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

---

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

---

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

---

## 1.2.3.4 Brian Kernighan's Algorithm

### 1.2.3.3.1 Count Set Bits : Hack (Faster Method)

It is a faster method to count the number of set bits in an integer.

It is also known as the **Brian Kernighan's Algorithm**.

### Solution

For this problem,

1. Removes the last set bit from the number.

2. Increments the count.

3. Repeats the process until the number becomes 0.

### Example

```cpp

int count_bits(int n){
  int count = 0;

  while(n>0){

    n = n & (n-1); // Removes the last set bit from the number.

    count++;

  }

  return count;
}

```

### Explanation

```cpp

Let, n = 9;

We know,

        N   = 9 = 0 0 0 0 1 0 0 1
      N-1   = 8 = 0 0 0 0 1 0 0 0
      ------------------------------
N & (N-1)  =  8 = 0 0 0 0 1 0 0 0

As the result is 8 so, the last set bit is removed from the number.

After that, the new value of n is 8. and the count is incremented by 1. So, the count is 1.

Similarly,

        N   = 8 = 0 0 0 0 1 0 0 0
      N-1   = 7 = 0 0 0 0 0 1 1 1
      ------------------------------
N & (N-1)  =  0 = 0 0 0 0 0 0 0 0

As the result is 0 so, the last set bit is removed from the number.

After that, the new value of n is 0. and the count is incremented by 1. So, the count is 2.

So, the total number of set bits in 9 is 2.

```

### Complexity

- Time complexity: **O(log(n))**

- Space complexity: **O(1)**

---

## 1.2.3.5 Fast Exponentiation

### What is Exponentiation?

```cpp

 1. a ^ 3 = a * a * a

 2. a ^ 4 = a * a * a * a

 3. a ^ n = a * a * a * a * ... * a (n times)

```

### Problem Statement

Write a function that takes two integers a and n and returns a^n.

### Example

```cpp

Input 1  : a = 2, n = 3

Output 1 : 8

Input 2  : a = 3, n = 5

Output 2 : 243

```

### Solution

For this problem,

1. We can calculate a^n by using the fast exponentiation method.

2. We can perform an AND operation between n and 1 to get the last bit.

3. If the last bit is 1, then we can multiply the answer by a. Otherwise, we can skip the multiplication.

4. After that, we can square the value of a. That means a = a \* a.

5. We can right shift the value of n by 1.

6. We can repeat the process until n becomes 0.

### Example

```cpp

int fastExpo(int a, int n){
  int ans = 1;

  while(n>0){

    int last_bit = n & 1;

    if(last_bit){ // If the last_bit is 1
      ans = ans * a; // Multiply the answer by a
    }

    a = a * a; // Square the value of a (Multiplying the previous power of a)

    n = n >> 1;

  }

  return ans;
}

```

### Explanation

```cpp

Let, a=3, n=5;

We know,

        a   = 3 = 0 0 0 0 0 0 1 1
        n   = 5 = 0 0 0 0 0 1 0 1

        a^5 = 3 * 3 * 3 * 3 * 3 = 243

After performing the fast exponentiation method,

step 1: n = 5, a = 3, ans = 1

        last_bit = n & 1 = 5 & 1 = 1 (so we can multiply the answer by a)

        ans = ans * a = 1 * 3 = 3 (updated) = 0 0 0 0 0 0 1 1

        a = a * a = 3 * 3 = 9 = 0 0 0 0 1 0 0 1

        n = n >> 1 = 5 >> 1 = 2 = 0 0 0 0 0 0 1 0

step 2: n = 2, a = 9, ans = 3

        last_bit = n & 1 = 2 & 1 = 0 (so we can skip the multiplication)

        ans = ans * a = 3 (same as before because last_bit is 0) = 0 0 0 0 0 0 1 1

        a = a * a = 9 * 9 = 81 = 0 0 1 0 1 0 0 1

        n = n >> 1 = 2 >> 1 = 1 = 0 0 0 0 0 0 0 1

step 3: n = 1, a = 81, ans = 3

        last_bit = n & 1 = 1 & 1 = 1 (so we can multiply the answer by a)

        ans = ans * a = 3 * 81 = 243 (updated) = 1 1 1 1 0 0 1 1

        a = a * a = 81 * 81 = 6561 = 1 1 1 1 1 0 0 0 1

        n = n >> 1 = 1 >> 1 = 0 = 0 0 0 0 0 0 0 0

Now the value of n is 0. So, the the process is stopped.

The final answer is 243.

```

---

## 1.2.3.6 Convert Decimal number to Binary

### Problem Statement

Write a function that takes an integer and returns its binary representation.

### Example

```cpp

Input 1  : 15

Output 1 : 1111

Input 2  : 16

Output 2 : 10000

```

### Solution

For this problem,

1. We can take an 'ans' variable and initialize it with zero (0).

2. We can also take a 'p' variable and initialize it with 1.

3. We can extract the last bit of the decimal number by performing an AND operation between the number and 1.

4. Now we can multiply the last bit with 'p' and add it to the 'ans'.

5. After the first iteration, 'p' will be **p = p \* 10**. Because we need to multiply the last bit with 10.

6. After that, we can right shift the number by 1.

7. We can repeat the process until the number becomes 0.

8. Finally, we can reverse the 'ans' to get the binary representation of the decimal number.

### What we're actually doing?

```cpp

Let, n = 9;

ans = 0 + 1 * 1 + 0 * 10 ^ 1 + 0 * 10 ^ 2 + 1 * 10 ^ 3 = 1001

ans = 0 + 1 * 1 + 0 * 10 + 0 * 100 + 1 * 1000 = 1001

```

### Example

```cpp

int decimalToBinary(int n){
  int ans = 0;
  int p = 1;

  while(n>0){

    int last_bit = n & 1;

    ans += p * last_bit;

    p = p * 10;

    n = n >> 1;

  }

  return ans;
}

```

### Explanation

```cpp

Let, n = 9;

We know,

        n   = 9 = 0 0 0 0 1 0 0 1

Now, we need to convert 9 to binary.

Step 1: n = 9, ans = 0, p = 1

        last_bit = n & 1 = 9 & 1 = 1

        ans = ans + p * last_bit = 0 + 1 * 1 = 1

        p = p * 10 = 1 * 10 = 10

        n = n >> 1 = 9 >> 1 = 4 = 0 0 0 0 0 1 0 0

Step 2: n = 4, ans = 1, p = 10

        last_bit = n & 1 = 4 & 1 = 0

        ans = ans + p * last_bit = 1 + 10 * 0 = 1

        p = p * 10 = 10 * 10 = 100

        n = n >> 1 = 4 >> 1 = 2 = 0 0 0 0 0 0 1 0

Step 3: n = 2, ans = 1, p = 100

        last_bit = n & 1 = 2 & 1 = 0

        ans = ans + p * last_bit = 1 + 100 * 0 = 1

        p = p * 10 = 100 * 10 = 1000

        n = n >> 1 = 2 >> 1 = 1 = 0 0 0 0 0 0 0 1

Step 4: n = 1, ans = 1, p = 1000

        last_bit = n & 1 = 1 & 1 = 1

        ans = ans + p * last_bit = 1 + 1000 * 1 = 1001

        p = p * 10 = 1000 * 10 = 10000

        n = n >> 1 = 1 >> 1 = 0 = 0 0 0 0 0 0 0 0

Now the value of n is 0. So, the the process is stopped.

The final answer is 1001.

```
