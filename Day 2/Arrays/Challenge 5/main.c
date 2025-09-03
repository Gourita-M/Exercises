#include <stdio.h>

int main(){
    int n;
    int numbers[5]={70,60,20,30,10,40};
    int temp;
    

                printf("%d",numbers[0]);
                printf("\n");
                printf("%d",numbers[1]);
             
                    
                    if(numbers[0] > numbers[1]){
                        temp = numbers[0] ;
                        numbers[0] = numbers[1];
                        numbers[1] = temp ;
                 }
                                                    // Not Finished Yet
       
       printf("\n");
       
       printf("%d",numbers[0]);
           printf("\n");
                printf("%d",numbers[1]);
    return 0;
}
/*
Challenge 7: Table in Ascending Order
Write a C program that asks the user to enter an array of integers and then displays the array sorted in 
ascending order without using any predefined sort function.
*/