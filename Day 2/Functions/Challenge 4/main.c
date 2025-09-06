#include <stdio.h>

int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("The minimum is: %d\n", minimum(x, y));
    return 0;
}


/*
Challenge 4: Minimum Function
Write a function in C that takes two integers as parameters and returns the smaller of the two.
 Create a main program that uses this function to display the minimum between two numbers.
*/