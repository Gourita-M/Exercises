#include <stdio.h>
#include <strings.h>

int main(){
     char string1[20];
     char string2[20];
     char stringmix[40];

     printf("Enter Your First Name: ");
         scanf("%s",&string1);

     printf("Enter Your Last Name: ");
         scanf("%s",&string2);

         strcpy(stringmix, string1);
         strcat(stringmix, " ");
         strcat(stringmix, string2);


     printf("The Mixed Strings: %s",stringmix);


    return 0;
}

/*
Challenge 3: String Concatenation
Write a C program that reads two strings and concatenates them into a single string. Print the resulting string.
*/