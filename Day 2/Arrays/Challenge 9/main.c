#include <stdio.h>

int main(){
       int n;
       int sum=0;
       int avrg=0;

          printf("Enter the Amount of Numbers to Calculate: ");
                scanf("%d",&n);

       int numbers[n];

          printf("Enter Your %d Numbers:\n",n);
        for(int i=0 ; i<n ; i++){
            scanf("%d",&numbers[i]);
         sum = sum + numbers[i];
        }
         avrg = sum / n ;
        printf("\nCalculating The Average of %d Numbers\n",n);
        printf("The Sum of Your Numbers are: %d\n",sum);
        printf("Your Number Average is: %d\n",avrg);

    return 0;
}
/*
Challenge 14: Calculate the Average
Write a C program that calculates the average of the elements in an integer array. 
The program should ask for the number of elements, the elements in the array, and then display the average.
*/