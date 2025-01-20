# Maximum Sum of Exponents Problem

**Code: #rcpas1**  
**Difficulty: Medium**  
**Link: [https://github.com/mrasadatik/random-coding-problems-and-solutions/blob/main/problems/maximum-sum-of-exponents-%23rcpas1](https://github.com/mrasadatik/random-coding-problems-and-solutions/blob/main/problems/maximum-sum-of-exponents-%23rcpas1)**

## Table of Contents

-   [Problem Description](#problem-description)
-   [Constraints](#constraints)
-   [Example Input](#example-input)
-   [Example Output](#example-output)
-   [Explanation](#explanation)
-   [Solution](#solution)
    -   [Explanation of the Solution](#explanation-of-the-solution)
    -   [Solution Pseudocode](#solution-pseudocode)
    -   [Solutions in Various Programming Languages](#solutions-in-various-programming-languages)
-   [How to Contribute](#how-to-contribute)
-   [License](#license)
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

## Example Input

```bash
n = 3
A[] = {3, 1, 1}
B[] = {6, 5, 4}
```

## Example Output

```bash
731
```

## Explanation

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

### Explanation of the Solution

#### Understanding the Problem

The problem asks us to find the maximum possible sum of exponentiation, given two arrays, $$\( A \)$$, and $$\( B \)$$, where for each index $$\( i \)$$, we need to compute the term $$\( A[i]^{B[i]} \)$$ (i.e., $$\( A[i] \)$$ raised to the power of $$\( B[i] \)$$). The challenge is to maximize the sum of these exponentiations by shuffling the elements in both arrays.

At first glance, this might seem like a straightforward task of pairing the elements in some random manner. However, to maximize the sum, we need to think carefully about the nature of exponentiation and how numbers interact when raised to different powers.

#### The Exponentiation Function

Exponentiation, where $$\( a^b \)$$ is the result of raising $$\( a \)$$ (the base) to the power of $$\( b \)$$ (the exponent), grows very quickly as either $$\( a \)$$ or $$\( b \)$$ increases. This means that:

-   A larger base raised to a large exponent will produce a much larger result than a small base raised to the same exponent.
-   Similarly, a large exponent applied to a smaller base can still produce a significantly larger result than a small exponent applied to a large base.

This property of exponentiation leads us to a key insight: to maximize the sum $$\( A[0]^{B[0]} + A[1]^{B[1]} + \dots + A[N-1]^{B[N-1]} \)$$, we want the larger elements from $$\( A \)$$ to be paired with the larger elements from $$\( B \)$$. In simpler terms:

-   **The largest bases should be paired with the largest exponents** because this will give the greatest contributions to the overall sum.
-   **The smallest bases should be paired with the smallest exponents** because these pairs will contribute the least.

#### Why Sorting Both Arrays Works

Given the nature of exponentiation, we can reason that pairing the largest values of $$\( A \)$$ and $$\( B \)$$ will maximize the sum. Let's explore this:

1. **Pairing Largest Values**:

    - When we pair the largest base $$\( A[i] \)$$ with the largest exponent $$\( B[i] \)$$, we are maximizing the result of $$\( A[i]^{B[i]} \)$$. This is because exponential functions grow rapidly with both the base and the exponent.
    - By ensuring that the largest numbers in $$\( A \)$$ and $$\( B \)$$ are paired together, we ensure that the sum is as large as possible.

2. **Exponential Growth**:
    - Exponentiation grows faster as the base or the exponent increases. For example, consider two pairs:
        - Pair 1: $$\( A_1 = 3 \), \( B_1 = 6 \)$$, resulting in $$\( 3^6 = 729 \)$$.
        - Pair 2: $$\( A_2 = 6 \), \( B_2 = 3 \)$$, resulting in $$\( 6^3 = 216 \)$$.
    - Clearly, $$\( 3^6 \)$$ is much larger than $$\( 6^3 \)$$. If we were to pair $$\( 3 \)$$ with $$\( 3 \)$$ and $$\( 6 \)$$ with $$\( 6 \)$$, the sum would be much smaller than pairing $$\( 3 \)$$ with $$\( 6 \)$$ and $$\( 6 \)$$ with $$\( 3 \)$$.

Thus, to maximize the overall sum of $$\( A[i]^{B[i]} \)$$, the most efficient strategy is to sort both arrays $$\( A \)$$ and $$\( B \)$$ in **descending order** and then compute the sum of corresponding exponentiations.

#### Mathematical Justification

1. **Exponentiation’s Growth**:

    - Exponentiation grows faster when both the base and the exponent are large. This means that large values of $$\( A[i] \)$$ raised to the power of large values of $$\( B[i] \)$$ will have a disproportionately larger effect on the sum compared to smaller values of $$\( A[i] \)$$ and $$\( B[i] \)$$.

2. **Optimal Pairing Strategy**:

    - By sorting both arrays in descending order and pairing corresponding elements, we ensure that the sum of exponentiations is maximized. If the values of $$\( A[i] \)$$ and $$\( B[i] \)$$ were paired differently (for example, pairing small values of $$\( A \)$$ with large values of $$\( B \)$$), the result would be much smaller.

3. **Illustrative Example**:

    - Let's say we have two arrays:
        - $$\( A = [3, 1, 2] \)$$
        - $$\( B = [6, 5, 4] \)$$
    - If we sort both arrays in descending order, we get:
        - $$\( A = [3, 2, 1] \)$$
        - $$\( B = [6, 5, 4] \)$$
    - Now, we compute the sum of exponentiations:

        $$
        \[
        3^6 + 2^5 + 1^4 = 729 + 32 + 1 = 762
        \]
        $$

    - If we had paired them differently (e.g., $$\( A = [1, 3, 2] \)$$ and $$\( B = [6, 5, 4] \)$$), the result would be:

        $$
        \[
        1^6 + 3^5 + 2^4 = 1 + 243 + 16 = 260
        \]
        $$

    - Clearly, the first pairing results in a much larger sum.

#### Computational Efficiency

-   Sorting both arrays takes $$\( O(N \log N) \)$$, which is efficient for the given constraint $$\( N \leq 10^3 \)$$.
-   After sorting, computing the sum involves a simple iteration over the arrays, taking $$\( O(N) \)$$.
-   Hence, the overall time complexity of the solution is $$\( O(N \log N) \)$$, which is optimal given the constraints.

### Solution Pseudocode

Structured Pseudocode

```bash
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

Natural Language-Based Pseudocode

```
Start by asking the user to input the number of elements, n.
Create two empty arrays, A and B, to store the values.
Ask the user to enter values for the arrays A and B.
Sort both arrays A and B in descending order.
Initialize a variable to keep track of the sum of exponents, called maxSum.
For each index from 0 to n-1, calculate A[i] raised to the power of B[i],
and add that to the maxSum.
Finally, display the maxSum.
```

### Solutions in Various Programming Languages

This problem has multiple solutions implemented in various programming languages. You can find the solutions in the `solutions` directory.

#### Languages Available

-   C (see [in.c.c](./solutions/in.c.c))

## How to Contribute

If you would like to contribute a solution or improve the problem statement, feel free to submit a pull request. Please ensure that your code adheres to the repository's coding standards.

## License

This project is licensed under the MIT License - see the [LICENSE](../../LICENSE.md) file for details.

## Acknowledgments

-   Thanks to the contributors who have helped in creating and solving these problems.
