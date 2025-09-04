#include <stdio.h>

int main(){
        int n; // Number of elements in array 1
        int nn; // Number of elements in array 2
        int nnn;  // 
            printf("Enter the Number of alements in the first array: ");
                scanf("%d",&n);

            printf("\nEnter the Number of alements in the Second array: ");
                scanf("%d",&nn);
    
        int arry1[n];
        int arry2[nn];
            
            printf("Enter You alements in the first array: ");
            for(int i=0 ; i < n ; i++){
                scanf("%d",&arry1[i]);
            }


    return 0;
}

/*
Challenge 15: Merging Two Paintings
Write a C program that merges two integer arrays into a single array. 
The program should ask the user for the number of elements in each array, 
then the elements in both arrays, and display the merged array.
*/