#include <stdio.h>
#include <strings.h>

struct book
{
    char title[50];
    char auteur[30];
    int year;
};


int main(){
    struct book b1;

    strcpy(b1.title, "Harry Potter");
    strcpy(b1.auteur, "Some brithish Woman");
    b1.year = 2000 ;

    printf("Book Info");
    printf("\n");
    printf("Title ----> %s",b1.title);
    printf("\n");
    printf("Auteur ----> %s",b1.auteur);
    printf("\n");
    printf("Year ----> %d",b1.year);
    printf("\n");


         

    return 0;
}

/*
Challenge 5: Structure and Return Function
Write a C program that defines a structure to represent a book with the fields titre, auteur, and année. 
Write a function that returns a variable from this structure initialized with given values. 
Display the book information in the main program.
*/