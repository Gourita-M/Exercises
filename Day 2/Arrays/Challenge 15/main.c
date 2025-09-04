#include <stdio.h>

int main() {
    int n, nn;

    
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n);

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &nn);

    int arr1[n], arr2[nn], merged[n + nn];

   
    printf("Enter %d elements for the first array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter %d elements for the second array:\n", nn);
    for(int i = 0; i < nn; i++) {
        scanf("%d", &arr2[i]);
    }

 
    for(int i = 0; i < n; i++) {
        merged[i] = arr1[i];  
    }
    for(int i = 0; i < nn; i++) {
        merged[n + i] = arr2[i];
    }

  
    printf("Merged array:\n");
    for(int i = 0; i < n + nn; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}


/*
Challenge 15: Merging Two Paintings
Write a C program that merges two integer arrays into a single array. 
The program should ask the user for the number of elements in each array, 
then the elements in both arrays, and display the merged array.
*/