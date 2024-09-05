/* 
PROBLEM STATEMENT : Write a C Program to find GCD and LCM of given two numbers
*/

#include <stdio.h>

int findGCD(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int findLCM(int num1, int num2) {
    return (num1 * num2) / findGCD(num1, num2);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, findGCD(num1, num2));

    printf("LCM of %d and %d is: %d\n", num1, num2, findLCM(num1, num2));

    return 0;
}