#include <stdio.h>

int main() {
    int arr[10];

  
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < 10 / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[10 - 1 - i];
        arr[10 - 1 - i] = temp;
    }

 
    printf("Reversed array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
Inversion of a Table
Write a C program that reverses the elements of an integer array. For example, 
if the array is [1, 2, 3, 4, 5], it should become [5, 4, 3, 2, 1]. Print the reversed array.
*/