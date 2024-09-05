/* 
PROBLEM STATEMENT : Write a C program to accept a string and to display the following:
(a) Total number of characters in the string.
(b) Total number of vowels in the string.
(c) Total number of occurrence of particular character in the string.
*/

#include <stdio.h>
#include <ctype.h>

int countVowels(char *str) {
    int count = 0;
    while (*str) {
        char currentChar = tolower(*str);
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' ||
            currentChar == 'o' || currentChar == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int countOccurrences(char *str, char target) {
    int count = 0;
    while (*str) {
        if (*str == target) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];
    char targetChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int totalCharacters = 0;
    while (str[totalCharacters] != '\0') {
        totalCharacters++;
    }
    printf("(a) Total number of characters in the string: %d\n", totalCharacters - 1);

    int totalVowels = countVowels(str);
    printf("(b) Total number of vowels in the string: %d\n", totalVowels);

    printf("Enter a character to count its occurrences: ");
    scanf(" %c", &targetChar);

    int totalOccurrences = countOccurrences(str, targetChar);
    printf("(c) Total number of occurrences of '%c' in the string: %d\n", targetChar, totalOccurrences);

    return 0;
}