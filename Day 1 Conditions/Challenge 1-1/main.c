#include <stdio.h>

int main(){

    int age;
    int yearofcontrib;
    float totalsaved;

    printf("Enter Your Age: ");
          scanf("%d",&age);
    
    printf("Enter Your Years of Contribution: ");
          scanf("%d",&yearofcontrib);

    printf("Enter Total of Your Savings in Dollars:$ ");
          scanf("%f",&totalsaved);

    printf("\n");

    if ( age < 65 )
         printf("Savings plan not yet available");

        else if (age >= 65 && yearofcontrib >= 20 && totalsaved >= 50000)
          printf("Partial plan with average pension");

        else if (age >= 65 && yearofcontrib >= 30 && totalsaved >= 100000 )
        printf("Complete plan with high pension");
        
    /*int age;
    int yearofcontrib;
    float totalsaved;)*/
    

    return 0;
}
/*
Write a C program to determine the retirement plan based on:

Age
Years of contribution
Total amount saved (in euros)
The plans are:

Age >= 65 years and Years of contributions >= 30 years and Amount >= €100,000: 
Complete plan with high pension
Age >= 65 years and Years of contributions >= 20 years and Amount >= €50,000: 
Partial plan with average pension
Age < 65: Savings plan not yet available
Add a 5% bonus for every €10,000 saved above €50,000.
*/