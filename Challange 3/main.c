#include <stdio.h>

int main(){
     
    float klm=0.0f;
    float yard;

    printf("Code to Convert kilometers to yard\n");
    printf("Enter distance in kilometers:");
          scanf("%f",&klm);
    printf("\n");

     yard= klm * 1093.61 ;
     
    printf("Your Distance in kilometers is: %.2f",yard);

    return 0;
}

/*
Challenge 3 : Conversion de la distance
Write a program that asks for the distance in kilometers and converts it to yards. Formula:

Yards = Km * 1093.61
*/