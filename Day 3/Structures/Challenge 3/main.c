#include <stdio.h>

struct Rectangle {
    float longueur;
    float largeur;
};


float calculerAire(struct Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {
    struct Rectangle rect;
    float aire;

   
    printf("Entrer la longueur du rectangle: ");
    scanf("%f", &rect.longueur);

    printf("Entrer la largeur du rectangle: ");
    scanf("%f", &rect.largeur);

    
    aire = calculerAire(rect);

  
    printf("L'aire du rectangle est: %.2f\n", aire);

    return 0;
}


/*
Challenge 3: Transition from Structure to Argument
Write a C program that defines a structure to represent a rectangle with fields longueurand largeur. 
Write a function that takes a variable from this structure as an argument and calculates the area of ​​the rectangle. 
Print the area in the main program.
*/