#include <stdio.h>

int main(){
      int randomnum[]={50,60,90,40,60,51,52,64,5,87,2,6,1,4,6,4,98,456,87,46,8};
      int minimum;
      
         minimum=randomnum[0];
      int n=sizeof(randomnum)/sizeof(randomnum[0]);

        for (int i = 1; i < n ; i++)
        {
            if(randomnum[i]< minimum){
                minimum = randomnum[i];
          }
         
        }
        
           printf("The Minimum Number is: %d",minimum);
           printf("\n");
           printf("The Number of elements inside the array is: %d",n);

    return 0;
}
/*
Challenge 5: Find the Minimum
Write a C program that finds and displays the smallest element in an array of integers. 
The program should ask for the number of elements and the elements in the array.
*/