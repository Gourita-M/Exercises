#include <stdio.h>

int main(){
    int num1;

    printf("Enter a Number to Check is odd or even: ");
          scanf("%d",&num1);

    if(num1 % 2 == 0)
       printf("Your Number is Even");
    
    else 
       printf("Your Number is Odd");

    return 0;
}


/*
Challenge 1: Even or Odd
Write a program that asks for a number and displays whether that number is even or odd.
*/