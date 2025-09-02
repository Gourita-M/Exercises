#include <stdio.h>

int main(){
        int age;
        int midchitory;
        int covtype;

        printf("Your Age: ");
             scanf("%d",&age);
        printf("Your Medical History");
        printf("\n0 for no problems, 1 for minor problems, 2 for major problems: ");
               scanf("%d",&midchitory);
        printf("Coverage type (1 for basic, 2 for extended): ");
               scanf("%d",&covtype);

        if (age < 30)
            printf("Basic Plan");
         else if (age >= 30 && midchitory == 0)
                  printf("Basic Plan");
               else if (age >= 30 && midchitory >=1)
                        printf("Extended Plan");
            
    return 0;
}

/*
Write a C program to determine the health plan based on:

Age
Medical history (0 for no problems, 1 for minor problems, 2 for major problems)
Coverage type (1 for basic, 2 for extended)
The plan options are:

Age < 30 years: Basic Plan
Age >= 30 years and Medical History = 0: Basic Plan
Age >= 30 years and Medical History >= 1: Extended Plan
Add additional coverage for major issues.
*/