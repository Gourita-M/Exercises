#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    while(str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}

/*
Challenge 2: Chain Length
Write a C program that calculates and displays the length of a string without using the function strlen().
*/