#include <stdio.h>
#include <string.h>  


struct Person {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    
    struct Person p1;

   
    strcpy(p1.nom, "Mouad");        
    strcpy(p1.prenom, "Gourita");    
    p1.age = 29;

    
    printf("Nom: %s\n", p1.nom);
    printf("Prenom: %s\n", p1.prenom);
    printf("Age: %d\n", p1.age);

    return 0;
}


/*
Challenge 1: Definition and Use of Structure
Write a C program that defines a structure to represent a person with the fields nom, prenom, and age.
 Create a variable from this structure, assign values ​​to the fields, and display these values.
*/