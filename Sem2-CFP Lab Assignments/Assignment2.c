/* 
PROBLEM STATEMENT : Write a C program to accept the length of three sides of a triangle and to test and print the type of triangle as equilateral, isosceles or right angled or none (if-else).
*/

#include <stdio.h>

int main() {
    double side1, side2, side3;

    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);

    //equilateral triangle
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an equilateral triangle.\n");
    }
    //isosceles triangle
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is an isosceles triangle.\n");
    }
    // right-angled triangle
    else if ((side1 * side1) + (side2 * side2) == (side3 * side3) ||
             (side2 * side2) + (side3 * side3) == (side1 * side1) ||
             (side1 * side1) + (side3 * side3) == (side2 * side2)) {
        printf("The triangle is a right-angled triangle.\n");
    }
    else {
        printf("The triangle is none of the specific types.\n");
    }

    return 0;
}