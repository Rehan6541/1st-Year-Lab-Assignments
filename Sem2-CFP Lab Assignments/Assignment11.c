/* 
PROBLEM STATEMENT : Write a C program using functions to compute addition and subtraction of two matrices.
*/

#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[][cols]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int rows, int cols, int matrix[][cols]) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


void addMatrices(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int result[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}


void subtractMatrices(int rows, int cols, int matrix1[][cols], int matrix2[][cols], int result[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("For Matrix 1:\n");
    inputMatrix(rows, cols, matrix1);

    printf("For Matrix 2:\n");
    inputMatrix(rows, cols, matrix2);

    addMatrices(rows, cols, matrix1, matrix2, result);
    printf("\nAddition of Matrices:\n");
    displayMatrix(rows, cols, result);

    subtractMatrices(rows, cols, matrix1, matrix2, result);
    printf("\nSubtraction of Matrices:\n");
    displayMatrix(rows, cols, result);

    return 0;
}