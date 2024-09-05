/* 
PROBLEM STATEMENT : Write a Program to print following pattern based on the number of rows.
e.g. Enter no. of rows: 6
Output:
     0
    101
   21012 
  3210123
 432101234
54321012345
*/

#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int k = i; k >= 0; k--) {
            printf("%d", k);
        }

        // Print decreasing numbers
        for (int l = 1; l <= i; l++) {
            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}