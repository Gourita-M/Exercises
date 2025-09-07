#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);   

    printf("Enter a character to search: ");
    scanf(" %c", &ch);       

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Character '%c' appears %d times.\n", ch, count);
    return 0;
}


/*
Challenge 6: Counting the Occurrences of a Character
Write a C program that reads a string and a character, 
then counts and displays how many times the character appears in the string.
*/