#include <stdio.h>

int main(){
    int ncount=0;
    int numbers[ncount];
    int max=0;

    printf("Enter The Number of Elements To Find the Maximum: ");
          scanf("%d",&ncount);

      for (int i=0 ; i < ncount ; i++){
             
         printf("Enter The Number %d: ",i+1);
          scanf("%d",&numbers[i]);
    }
    max = numbers[0];
       for (int j=0 ; j < ncount ; j++){
           if(numbers[j]> max){
                max = numbers[j];
           }

       
           
       }
       printf("\n%d",max);
    return 0;
}
/*
Challenge 4: Find the Maximum
Write a C program that finds and displays the largest element in an array of integers. 
The program should ask for the number of elements and the elements in the array.
*/