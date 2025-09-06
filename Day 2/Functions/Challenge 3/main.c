#include <stdio.h>

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("The maximum is: %d\n", maximum(x, y));
    return 0;
}


/*
Challenge 3: Maximum Function
Write a function in C that takes two integers as parameters and returns the larger of the two.
 Create a main program that uses this function to display the maximum between two numbers.
*/