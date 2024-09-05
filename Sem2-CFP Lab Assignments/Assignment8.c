/* 
PROBLEM STATEMENT : Write a C program to carry out following operations on strings using library functions:
a) To concatenate a string s2 to string s1.
b) To find the length of a given string.
c) To compare two strings sl and s2.
d) To copy a string s2 to another string sl.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[50];

    printf("Enter the first string (s1): ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the second string (s2): ");
    fgets(s2, sizeof(s2), stdin);

    // Remove newline characters 
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // Concatenate s2 to s1
    strcat(s1, s2);
    printf("a) Concatenated string: %s\n", s1);

    //length of string s1
    int lengthS1 = strlen(s1);
    printf("b) Length of s1: %d\n", lengthS1);

    // Compare s1 and s2
    int compareResult = strcmp(s1, s2);
    if (compareResult == 0) {
        printf("c) s1 and s2 are equal.\n");
    } else if (compareResult < 0) {
        printf("c) s1 is lexicographically less than s2.\n");
    } else {
        printf("c) s1 is lexicographically greater than s2.\n");
    }

    // Copy s2 to s1
    strcpy(s1, s2);
    printf("d) Copied string (s1): %s\n", s1);

    return 0;
}