#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("The sum is: %d\n", sum(x, y));
    return 0;
}






/*
Challenge 1: Sum Function
Write a function in C that takes two integers as parameters and returns their sum. 
Create a main program that uses this function to display the sum of two numbers.
*/