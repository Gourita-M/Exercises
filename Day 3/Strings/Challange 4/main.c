#include <stdio.h>
#include <strings.h>

int main(){
      char str1[50]="Hello";
      char str2[50]="Hello";


    if(strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}

/*
Challenge 4: Chain Comparison
Write a C program that reads two strings and compares whether they are equal or not. 
Display a message indicating whether the strings are equal or different.
*/