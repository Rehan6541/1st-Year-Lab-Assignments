/* 
PROBLEM STATEMENT : Write a C Program to read any character array and print the following pattern. 
e.g. Enter any string: Welcome
Output:
W
We 
Wel
Welcom
Welcome
*/

#include <stdio.h>
#include <string.h>

int main() {
    char input[50];

    printf("Enter any string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from the input string
    input[strcspn(input, "\n")] = '\0';

    int length = strlen(input);

    // Print the pattern
    for (int i = 1; i <= length; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", input[j]);
        }
        printf("\n");
    }

    return 0;
}