#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The %d-th Fibonacci term is: %d\n", n, fibonacci(n));
    return 0;
}


/*
Challenge 6: Fibonacci Function
Write a function in C that calculates the nth term of the Fibonacci sequence. 
The function must take an integer as a parameter and return the nth term.
 Create a main program that uses this function to display the requested Fibonacci term.
*/