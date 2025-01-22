/**
 * @file in.cpp
 *
 * @brief This program calculates the maximum sum of exponents by reading two arrays
 *        from the user, sorting them in descending order, and computing the sum of
 *        A[i] raised to the power of B[i].
 *
 * @link https://github.com/mrasadatik/random-coding-problems-and-solutions/tree/main/problems/%23rcpas1~maximum-sum-of-exponents
 *
 * @author Asaduzzaman Atik
 * @date January 22, 2025
 *
 * MIT License
 *
 * @copyright Copyright (c) 2025 Asaduzzaman Atik
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so, subject
 * to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
 * FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * @brief Compares two integers in descending order.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @return bool True if a > b, false otherwise.
**/
bool compareDescending(int a, int b);

/*
/**
 * @brief Sorts an array in descending order using Bubble Sort
 *
 * @param arr The array to be sorted.
 * @param n The number of elements in the array.
**/
/*
void bubbleSortDescending(std::vector<int>& arr);
*/

/*
/**
 * @brief Merges two sorted subarrays into a single sorted array in descending order.
 *
 * @param arr The array containing the subarrays.
 * @param left The left index of the subarray.
 * @param mid The middle index that divides the array.
 * @param right The right index of the subarray.
**/
/*
void merge(std::vector<int>& arr, int left, int mid, int right);
*/

/*
/**
 * @brief Sorts an array in descending order using Merge Sort.
 *
 * @param arr The array to be sorted.
 * @param left The left index of the subarray.
 * @param right The right index of the subarray.
**/
/*
void mergeSortDescending(std::vector<int>& arr, int left, int right);
*/

int main() {
    int n;

    // Read the number of elements
    std::cout << "Enter the number of elements (n): ";
    std::cin >> n;

    // Create vectors for arrays A and B
    std::vector<int> A(n);
    std::vector<int> B(n);

    // Read elements for array A
    std::cout << "Enter elements of array A[n]: ";
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    // Read elements for array B
    std::cout << "Enter elements of array B[n]: ";
    for (int i = 0; i < n; i++) {
        std::cin >> B[i];
    }

    // Sorting both arrays using quicksort (currently used by default)
    std::sort(A.begin(), A.end(), compareDescending); // O(n log n)
    std::sort(B.begin(), B.end(), compareDescending); // O(n log n)


    // Uncomment the following lines to use other sorting methods instead:
    // For bubbleSort, uncomment the next two lines:
    // bubbleSortDescending(A); // O(n^2) (worst case)
    // bubbleSortDescending(B); // O(n^2) (worst case)

    // For mergeSort, uncomment the next two lines:
    // mergeSortDescending(A, 0, n - 1); // O(n log n)
    // mergeSortDescending(B, 0, n - 1); // O(n log n)

    // Calculate the maximum sum of exponents
    long long maxSum = 0;
    for (int i = 0; i < n; i++) {
        maxSum += std::pow(A[i], B[i]);
    }

    // Print the result
    std::cout << "Maximum sum of exponents: " << maxSum << std::endl;

    return 0;
}

/**
 * @brief Compares two integers in descending order.
 *
 * @param a The first integer.
 * @param b The second integer.
 * @return bool True if a > b, false otherwise.
 */
bool compareDescending(int a, int b) {
    return a > b;
}

/*
/**
 * @brief Sorts an array in descending order using Bubble Sort
 *
 * @param arr The array to be sorted.
 * @param n The number of elements in the array.
**/
/*
void bubbleSortDescending(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // Exit if no swaps were made
    }
}
*/

/*
/**
 * @brief Merges two sorted subarrays into a single sorted array in descending order.
 *
 * @param arr The array containing the subarrays.
 * @param left The left index of the subarray.
 * @param mid The middle index that divides the array.
 * @param right The right index of the subarray.
**/
/*
void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; ++i) L[i] = arr[left + i];
    for (int i = 0; i < n2; ++i) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}
*/

/*
/**
 * @brief Sorts an array in descending order using Merge Sort.
 *
 * @param arr The array to be sorted.
 * @param left The left index of the subarray.
 * @param right The right index of the subarray.
**/
/*
void mergeSortDescending(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSortDescending(arr, left, mid);
        mergeSortDescending(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
*/
