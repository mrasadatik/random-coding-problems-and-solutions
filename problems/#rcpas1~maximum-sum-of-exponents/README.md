# Maximum Sum of Exponents (#rcpas1)

**Difficulty: Medium**  
**Issue: [#14](https://github.com/mrasadatik/random-coding-problems-and-solutions/issues/14)**  
**Link: [https://github.com/mrasadatik/random-coding-problems-and-solutions/blob/main/problems/%23rcpas1~maximum-sum-of-exponents](https://github.com/mrasadatik/random-coding-problems-and-solutions/blob/main/problems/%23rcpas1~maximum-sum-of-exponents)**

## Table of Contents

-   [Problem Description](#problem-description)
-   [Constraints](#constraints)
-   [Example Input/Output](#example-input-output)
-   [Solution](#solution)
    -   [Explanation of the Solution](#explanation-of-the-solution)
    -   [Solution Pseudocode](#solution-pseudocode)
    -   [Solutions in Various Programming Languages](#solutions-in-various-programming-languages)
-   [How to Contribute](#how-to-contribute)
-   [Acknowledgments](#acknowledgments)

## Problem Description

You are given two arrays, `A` and `B`, of equal size `N`. The goal is to find the maximum possible sum of exponentiation in the form:

$$
\[
A[0]^{B[0]} + A[1]^{B[1]} + \dots + A[N-1]^{B[N-1]}
\]
$$

You are allowed to shuffle the elements of arrays `A` and `B` to achieve the maximum sum. After shuffling, compute the sum of `A[i] ^ B[i]` for all valid indices `i` and output the maximum possible sum.

## Constraints

-   1 ≤ N ≤ 10^3
-   1 ≤ A[i], B[i] ≤ 10^3 for all valid indices i.
-   The number of elements N is guaranteed to be the same in both arrays.

## Example Input/Output

```plaintext
Input:
n = 3
A[] = {3, 1, 1}
B[] = {6, 5, 4}

Output:
731
```

### Explanation

In the given example, we are tasked with finding the maximum sum of exponentiation by shuffling the arrays.

-   A possible optimal shuffle is:
    -   A = {1, 1, 3}
    -   B = {4, 5, 6}

So, the sum becomes:

$$
\[
1^4 + 1^5 + 3^6 = 1 + 1 + 729 = 731
\]
$$

Thus, the maximum sum is **731**.

## Solution

### Understanding the Problem

The problem asks us to find the maximum possible sum of exponentiation, given two arrays, $$\( A \)$$, and $$\( B \)$$, where for each index $$\( i \)$$, we need to compute the term $$\( A[i]^{B[i]} \)$$ (i.e., $$\( A[i] \)$$ raised to the power of $$\( B[i] \)$$). The challenge is to maximize the sum of these exponentiations by shuffling the elements in both arrays.

At first glance, this might seem like a straightforward task of pairing the elements in some random manner. However, to maximize the sum, we need to think carefully about the nature of exponentiation and how numbers interact when raised to different powers.

### The Exponentiation Function

Exponentiation, where $$\( a^b \)$$ is the result of raising $$\( a \)$$ (the base) to the power of $$\( b \)$$ (the exponent), grows very quickly as either $$\( a \)$$ or $$\( b \)$$ increases. This means that:

-   A larger base raised to a large exponent will produce a much larger result than a small base raised to the same exponent.
-   Similarly, a large exponent applied to a smaller base can still produce a significantly larger result than a small exponent applied to a large base.

This property of exponentiation leads us to a key insight: to maximize the sum $$\( A[0]^{B[0]} + A[1]^{B[1]} + \dots + A[N-1]^{B[N-1]} \)$$, we want the larger elements from $$\( A \)$$ to be paired with the larger elements from $$\( B \)$$. In simpler terms:

-   **The largest bases should be paired with the largest exponents** because this will give the greatest contributions to the overall sum.
-   **The smallest bases should be paired with the smallest exponents** because these pairs will contribute the least.

### Computational Efficiency

-   Sorting both arrays takes $$\( O(N \log N) \)$$, which is efficient for the given constraint $$\( N \leq 10^3 \)$$.
-   After sorting, computing the sum involves a simple iteration over the arrays, taking $$\( O(N) \)$$.
-   Hence, the overall time complexity of the solution is $$\( O(N \log N) \)$$, which is optimal given the constraints.

### Pseudocode

```plaintext
START
    Prompt user for number of elements
    Read n
    Create array A of size n
    Create array B of size n
    For i = 1 to n
        Prompt user for value of A[i]
        Read A[i]
    End For
    For i = 1 to n
        Prompt user for value of B[i]
        Read B[i]
    End For
    Sort array A in descending order
    Sort array B in descending order
    Set maxSum to 0
    For i = 1 to n
        maxSum = maxSum + (A[i] ^ B[i])
    End For
    Print maxSum
END
```

### Solutions in Various Programming Languages

This problem has multiple solutions implemented in various programming languages. You can find the solutions in the [`solutions`](./solutions/) directory.

#### Languages Available

-   C (see [`in.c.c`](./solutions/in.c.c))

## How to Contribute

If you would like to contribute a solution or improve the problem statement, feel free to submit a pull request. Please ensure that your code adheres to the repository's coding standards.

## License

This project is licensed under the MIT License - see the [LICENSE](../../LICENSE.md) file for details.

## Acknowledgments

-   Thanks to the contributors who have helped in creating and solving these problems.
