//PROBLEM STATEMENT : C program to implement linear search using iterative & recursive approach

#include <stdio.h>
//Iterative
int linearSearchIterative(int* arr, int size, int key)
{
    for (int i = 0; i < size; i++) {

        if (arr[i] == key) {

            return i;

        }

    }

    return -1;
}

//Recursive 
int linearSearchRecursive(int* arr, int size, int key)
{

    if (size == 0)

        return -1;

    if (arr[size - 1] == key) {

        return size - 1;

    }
}

int main()
{

    int arr[10] = { 3, 4, 1, 7, 5, 8, 11, 42, 3, 13 };

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 4;
 
    int index = linearSearchIterative(arr, size, key);
 

    if (index == -1) {

        printf("The element is not present in the arr.");

    }

    else {

        printf("The element is present at arr[%d].", index);

    }
 

    return 0;
}

