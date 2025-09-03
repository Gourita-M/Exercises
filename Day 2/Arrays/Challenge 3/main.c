#include <stdio.h>

int main(){
      
      int n=1;
      int numbers[n];
      int sum=0;
      
      printf("Enter How Many Numbers u want to Calclut: ");
             scanf("%d",&n);
         
             for ( int i = 0 ; i < n ; i++ ){
             printf("Enter Number%d: ",i+1);
                scanf("%d",&numbers[i]);

            sum= sum+numbers[i];
         }
         printf("Sum of Your %d Numbers is : %d",n,sum);
    return 0;
}

/*
hallenge 3: Sum of the Elements
Write a C program that calculates and displays the sum of the elements in an integer array. 
The program should ask for the number of elements, then the elements in the array, and display the total sum.
*/