#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The factorial of %d is: %d\n", n, factorial(n));
    return 0;
}

/*
Challenge 5: Factorial Function
Write a function in C that calculates the factorial of a positive integer. 
The function must take an integer as a parameter and return its factorial. 
Create a main program that uses this function to display the factorial of a given number.
*/