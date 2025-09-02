#include <stdio.h>

int main(){
    int num;
        printf("Enter a Number to Check: ");
            scanf("%d",&num);

        if (num < 0)
            printf("Your Number is Negative");

            else if(num == 0)
             printf("Your Number is Zero");

               else
                  printf("Your Number is Positive");
        


    return 0;
}
/*
Challenge 6: Positive, Negative or Zero
Write a program to check if the given number is positive, negative, or zero. 
If the number is less than zero, then the number is negative, and if the number is greater than zero, then the number is positive. If both conditions are false, the number is zero.
*/ 

