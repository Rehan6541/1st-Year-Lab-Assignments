/* 
PROBLEM STATEMENT : Write a C Program to convert Decimal number to Binary number and vice versa.
*/

#include <stdio.h>

// Function to convert decimal to binary
long decimalToBinary(int decimal) {
    long binary = 0, base = 1;
    while (decimal > 0) {
        binary += (decimal % 2) * base;
        decimal /= 2;
        base *= 10;
    }
    return binary;
}

// Function to convert binary to decimal
int binaryToDecimal(long binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

int main() {
    int choice, decimal;
    long binary;

    printf("Choose conversion:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter decimal number: ");
            scanf("%d", &decimal);
            printf("Binary equivalent: %ld\n", decimalToBinary(decimal));
            break;

        case 2:
            printf("Enter binary number: ");
            scanf("%ld", &binary);
            printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}