#include <stdio.h>
#include <strings.h>

struct student {
       char name[20];
       char pername[20];
       int grade;
};

int main(){
    
    struct student s1;

    strcpy(s1.name, "Mouad");        
    strcpy(s1.pername, "Gourita");    
    s1.grade = 99;

    
    printf("Nom: %s\n", s1.name);
    printf("Prenom: %s\n", s1.pername);
    printf("Age: %d\n", s1.grade);


    return 0;
}

/*
Challenge 2: Structure with Table
Write a C program that defines a structure to represent a student with the fields nom, prenom, 
and an array of integers to store the grades. Assign values ​​to the fields and grades, 
then display the student's information.
*/