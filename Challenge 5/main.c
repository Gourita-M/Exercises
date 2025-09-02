#include <stdio.h>

int main(){

       float temperature=0.0f;

       printf("Enter Temperature to check water state (solid, liquid, gas)");
       printf("\n");
       printf("Temprature: ");
            scanf("%f",&temperature);

        if (temperature < 0)
            printf("Water is Solid");
          else if (temperature < 100)
            printf("Water is Liquid");
            else
            printf("Water is Gas");
    return 0;
}

/*

Challenge 5: Temperature Display
Write a program that asks for the temperature in Celsius and displays the state 
  of water at that temperature (solid, liquid, gas). Rule:

C < 0: Solid
0 <= C < 100: Liquid
C >= 100: Gas

*/