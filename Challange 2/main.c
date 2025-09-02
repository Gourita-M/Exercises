#include <stdio.h>

int main(){
    float temperature=0.f;
    float tempkelvin;
    
    printf("Enter Temperature in Celsius to convert to Kelvin:");
        scanf("%f",&temperature);
    tempkelvin= temperature + 273.15;
    
    printf("Your Temperature in Kelvin is: %.2f",tempkelvin);
    
    
    return 0;
}