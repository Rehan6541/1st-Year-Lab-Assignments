/* 
PROBLEM STATEMENT : Write a C program to store n numbers in an array and compute the sum of all even and odd numbers in an array.
*/

#include <stdio.h>


void computeSumOfEvenOdd(int numbers[], int n, int *sumEven, int *sumOdd) {
    *sumEven = 0;
    *sumOdd = 0;

    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            *sumEven += numbers[i];
        } else {
            *sumOdd += numbers[i];
        }
    }
}

int main() {
    int n;

    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int sumEven, sumOdd;

    computeSumOfEvenOdd(numbers, n, &sumEven, &sumOdd);

    printf("Sum of even numbers: %d\n", sumEven);
    printf("Sum of odd numbers: %d\n", sumOdd);

    return 0;
}