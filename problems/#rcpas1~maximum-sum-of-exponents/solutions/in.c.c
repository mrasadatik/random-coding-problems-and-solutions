/**
 * @file in.c.c
 *
 * @brief This program calculates the maximum sum of exponents by reading two arrays
 *        from the user, sorting them in descending order, and computing the sum of
 *        A[i] raised to the power of B[i].
 *
 * @link https://github.com/mrasadatik/random-coding-problems-and-solutions/tree/main/problems/%23rcpas1~maximum-sum-of-exponents
 *
 * @author Asaduzzaman Atik
 * @date January 20, 2025
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

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 /**
  * @brief Compares two integers in descending order.
  *
  * @param a Pointer to the first integer.
  * @param b Pointer to the second integer.
  * @return int A negative value if a < b, zero if a == b, or a positive value if a > b.
  */
int compareDescending(const void* a, const void* b);

/*
/**
 * @brief Sorts an array in descending order using Bubble Sort.
 *
 * @param arr The array to be sorted.
 * @param n The number of elements in the array.
**/
// void bubbleSortDescending(int arr[], int n);

/*
/**
 * @brief Merges two sorted subarrays into a single sorted array in descending order.
 *
 * @param arr The array containing the subarrays.
 * @param left The left index of the subarray.
 * @param mid The middle index that divides the array.
 * @param right The right index of the subarray.
**/
// void merge(int arr[], int left, int mid, int right);

/*
/**
 * @brief Sorts an array in descending order using Merge Sort.
 *
 * @param arr The array to be sorted.
 * @param left The left index of the subarray.
 * @param right The right index of the subarray.
**/
// void mergeSortDescending(int arr[], int left, int right);

int main(void) {
    int n;

    // Read the number of elements
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    // Approach 1: Dynamic Memory Allocation (Recommended)
    // Dynamically allocate memory for arrays A and B
    int* A = (int*)malloc(n * sizeof(int));
    int* B = (int*)malloc(n * sizeof(int));

    if (A == NULL || B == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    // Approach 2: Variable-Length Array (Not recommended due to standard issues)
    // Uncomment the following lines to use variable-length arrays instead:
    /*
    int A[n], B[n];
    */

    // Read elements for array A
    printf("Enter elements of array A[n]: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Read elements for array B
    printf("Enter elements of array B[n]: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    // Sorting both arrays using quicksort (currently used by default)
    qsort(A, n, sizeof(int), compareDescending); // O(n log n)
    qsort(B, n, sizeof(int), compareDescending); // O(n log n)

    // Uncomment the following lines to use other sorting methods instead:
    // For bubbleSort, uncomment the next two lines:
    // bubbleSortDescending(A, n); // O(n^2) (worst case)
    // bubbleSortDescending(B, n); // O(n^2) (worst case)

    // For mergeSort, uncomment the next two lines:
    // mergeSortDescending(A, 0, n - 1); // O(n log n)
    // mergeSortDescending(B, 0, n - 1); // O(n log n)

    // Calculate the maximum sum of exponents
    long long maxSum = 0;
    for (int i = 0; i < n; i++) {
        maxSum += pow(A[i], B[i]);
    }

    // Print the result
    printf("Maximum sum of exponents: %lld\n", maxSum);

    // Free allocated memory
    free(A);
    free(B);

    return 0;
}

/**
 * @brief Compares two integers in descending order for qsort.
 *
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 * @return int A negative value if a < b, zero if a == b, or a positive value if a > b.
 */
int compareDescending(const void* a, const void* b) {
    return (*(int*)b - *(int*)a); // Compare in descending order
}

/*
/**
 * @brief Sorts an array in descending order using Bubble Sort.
 *
 * @param arr The array to be sorted.
 * @param n The number of elements in the array.
**/
/*
void bubbleSortDescending(int arr[], int n) {
    int swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; // Early exit if no elements were swapped
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
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;  // Size of the left subarray
    int n2 = right - mid;     // Size of the right subarray
    int L[n1], R[n2];         // Temporary arrays for left and right subarrays

    // Copy data into temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    // Merge the temporary arrays back into arr[]
    while (i < n1 && j < n2) {
        if (L[i] >= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    // Copy remaining elements of L[], if any
    while (i < n1) {
        arr[k++] = L[i++];
    }

    // Copy remaining elements of R[], if any
    while (j < n2) {
        arr[k++] = R[j++];
    }
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
void mergeSortDescending(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // Find the middle point
        mergeSortDescending(arr, left, mid);  // Sort the first half
        mergeSortDescending(arr, mid + 1, right);  // Sort the second half
        merge(arr, left, mid, right);  // Merge the sorted halves
    }
}
*/
