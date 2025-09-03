#include <stdio.h>

int main(){
      float elect;
      int usertype;
      int contract;
      float cost;
      float bill;

      printf("Enter Your Electricity Consumption: kwh");
            scanf("%d",&elect);
        
      printf("User type (1 for residential, 2 for commercial): ");
            scanf("%d",&usertype);

      printf("Enter Your Contract Type (0 for standard, 1 for reduced): ");
            scanf("%d",&contract);

      printf("\n");

        if (usertype == 1){
            cost = elect * 0.20;
                 if(contract == 0)
                    cost = elect * 0.15 ;
        } 
        if (usertype == 2){
            cost = elect * 0.30 ;
                 if(contract == 1)
                   cost = elect * 0.25

        }

      
    



    if (elect > 500.0f) {
        bill *= 1.10f;
    }

    // Output
    printf("Electricity Bill: €%.2f\n", bill);


    return 0;
}
/*
Challenge 6: Calculating the Electricity Bill
Write a C program to calculate the electricity bill based on:

Electricity consumption (in kWh)
User type (1 for residential, 2 for commercial)
Contract type (0 for standard, 1 for reduced)
The rates are:

Residential: €0.20/kWh for standard contract, €0.15/kWh for reduced contract
Commercial: €0.30/kWh for standard contract, €0.25/kWh for reduced contract
Add a 10% surcharge if consumption exceeds 500 kWh.
// subtotal is the bill before surcharge
if (consumption_kwh > 500) {
    subtotal *= 1.10f
*/