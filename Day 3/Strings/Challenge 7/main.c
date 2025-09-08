#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}


/*
Challenge 7: Converting to Capital Letters
Write a C program that reads a string and converts all characters to uppercase. Display the modified string.
*/