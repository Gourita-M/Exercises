#include <stdio.h>

int product(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("The product is: %d\n", product(x, y));
    return 0;
}

/*
Challenge 2: Multiplication Function
Write a function in C that takes two integers as parameters and returns their product.
 Create a main program that uses this function to display the product of two numbers.
*/