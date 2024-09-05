/* 
PROBLEM STATEMENT : Write a C program to store the n data samples in an array and calculate mean, mode and median.
*/

#include <stdio.h>
#include <stdlib.h>

double calculateMean(int data[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    return sum / n;
}

int calculateMode(int data[], int n) {
    int mode = 0, maxCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (data[j] == data[i])
                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            mode = data[i];
        }
    }

    return mode;
}

double calculateMedian(int data[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    if (n % 2 == 0) {
        return (data[(n - 1) / 2] + data[n / 2]) / 2.0;
    } else {
        return data[n / 2];
    }
}

int main() {
    int n;

    printf("Enter the number of data samples (n): ");
    scanf("%d", &n);

    int *data = (int *)malloc(n * sizeof(int));
    printf("Enter the data samples:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    printf("Mean: %.2f\n", calculateMean(data, n));
    printf("Mode: %d\n", calculateMode(data, n));
    printf("Median: %.2f\n", calculateMedian(data, n));

    // Free allocated memory
    free(data);

    return 0;
}