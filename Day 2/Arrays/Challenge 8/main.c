#include <stdio.h>

int main(){
    int n;
    
    printf("Enter The Amount of Numbers to Check: ");
           scanf("%d",&n);

    int numbers[n];
       printf("Enter %d Numbers: \n",n);
       for ( int i=0 ; i < n ; i++){
            scanf("%d",&numbers[i]);
       }
    printf("Displaying Odd Numbers Only:\n");
    for (int i=0 ; i < n ; i++){
         if(numbers[i] % 2 != 0)
              printf("%d . ",numbers[i]);
    }
    return 0;
}
/*
Challenge 13: Show Odd Items
Write a C program that displays only the odd elements of an integer array. 
The program should ask for the number of elements and the elements in the array.
*/