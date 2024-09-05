/* 
PROBLEM STATEMENT : Write a C program to read student name, roll no, 5 subject marks for N students and calculate the total and average using structure and file handling.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    int marks[5];
    int total;
    float average;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Calculate total and average for each student
    for (int i = 0; i < n; i++) {
        students[i].total = 0;

        for (int j = 0; j < 5; j++) {
            students[i].total += students[i].marks[j];
        }

        students[i].average = (float)students[i].total / 5;
    }

    // Write student information to a file
    FILE *file = fopen("student_info.txt", "w");
    if (file == NULL) {
        printf("Error opening file.");
        return 1;
    }

    fprintf(file, "Student Information:\n");
    for (int i = 0; i < n; i++) {
        fprintf(file, "\nStudent %d:\n", i + 1);
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Roll Number: %d\n", students[i].rollNumber);
        fprintf(file, "Total Marks: %d\n", students[i].total);
        fprintf(file, "Average Marks: %.2f\n", students[i].average);
    }

    fclose(file);
    printf("\nStudent information has been written to 'student_info.txt'.\n");

    return 0;
}