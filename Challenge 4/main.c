#include <stdio.h>

int main(){
     
      float klm=0.0f;
      float meters;

      printf("Enter Your Speed in Kilometers/h to conver to Meters/h\n");
      printf("Kilometers/h:");
      scanf("%f",&klm);

      meters= klm * 0.27778 ;
      printf("\n");

      printf("Meters/h: %lf",meters);


    return 0;
}


/*
Challenge 4: Speed ​​Conversion

Write a program that asks for the speed in kilometers per hour (km/h) 

and converts it to meters per second (m/s). Formula:

m/s = km/h * 0.27778
*/