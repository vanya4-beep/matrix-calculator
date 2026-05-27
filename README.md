# Matrix Calculator (C++)

A beginner C++ project for calculating the determinant of matrices.

## Features
- 2×2 Matrix Determinant
- 3×3 Matrix Determinant

## Concepts Used
- C++
- STL `pair`
- Nested pairs
- Mathematical logic
- Input/Output handling

## Formula Used

### 2×2 Determinant
det(A) = ad - bc

### 3×3 Determinant
det(A) = a(ei − fh) − b(di − fg) + c(dh − eg)

## How to Run

1. Compile the program:
```bash
g++ determinant_2x2.cpp -o output
```

2. Run:
```bash
./output
```

## Example Input
```text
1 2
3 4
```

## Example Output
```text
-2
```

## Why I Made This
I built this while learning STL and experimenting with `pair` in C++. I wanted to try applying what I had just learned to something mathematical and fun.
