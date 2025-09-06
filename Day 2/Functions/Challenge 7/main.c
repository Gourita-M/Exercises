#include <stdio.h>


char* reverseString(char str[]) {
    int length = 0;
    int start, end;
    char temp;

    
    while (str[length] != '\0') {
        length++;
    }

    start = 0;
    end = length - 1;

   
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    return str;
}

int main() {
    char text[100];

    printf("Enter a string: ");
    scanf("%s", text);

    printf("Reversed string: %s\n", reverseString(text));

    return 0;
}
/*
Challenge 7: String Inversion Function
Write a function in C that reverses a string. 
The function must take a string as a parameter and return the reversed string. 
Create a main program that uses this function to display a reversed string.
*/