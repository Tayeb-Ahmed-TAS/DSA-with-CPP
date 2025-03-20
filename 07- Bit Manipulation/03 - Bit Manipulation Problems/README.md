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
