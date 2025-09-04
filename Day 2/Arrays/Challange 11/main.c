#include <stdio.h>

int main() {
    int n, i, oldValue, newValue;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

 
    printf("Enter the value to replace: ");
    scanf("%d", &oldValue);

    printf("Enter the new value: ");
    scanf("%d", &newValue);


    for (i = 0; i < n; i++) {
        if (arr[i] == oldValue) {
            arr[i] = newValue;
        }
    }

 
    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


/*
Challenge 11: Replace an Element
Write a C program that replaces all occurrences of a specific value in an integer array with a new value. 
The program should prompt the user for the number of elements, the array elements, the value to replace, 
and the new value.
*/