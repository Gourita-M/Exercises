#include <stdio.h>

int main(){
     
    int choice;
    float a;
    float b;
    float result;

     printf("1. a + b\n");
     printf("2. a - b\n");
     printf("3. a * b\n");
     printf("4. a / b\n");

      printf("\nEnter Which Calculating: ");
              scanf("%d",&choice);

    switch (choice)
    {
    case 1:
         printf("Enter Number1: ");
           scanf("%f",&a);
           printf("\n");
     printf("Enter Number2: ");
           scanf("%f",&b);
        result=a+b;
         printf("%.2f + %.2f = %.2f",a,b,result);
        break;
     case 2:
         printf("Enter Number1: ");
           scanf("%f",&a);
           printf("\n");
     printf("Enter Number2: ");
           scanf("%f",&b);
        result=a-b;
         printf("%.2f - %.2f = %.2f",a,b,result);
        break;
     case 3:
         printf("Enter Number1: ");
           scanf("%f",&a);
           printf("\n");
     printf("Enter Number2: ");
           scanf("%f",&b);
        result=a*b;
         printf("%.2f * %.2f = %.2f",a,b,result);
        break;
      case 4:
         printf("Enter Number1: ");
           scanf("%f",&a);
           printf("\n");
     printf("Enter Number2: ");
           scanf("%f",&b);
        result=a/b;
         printf("%.2f / %.2f = %.2f",a,b,result);
        break;
    
    default:
        printf("invalid coice");
        break;
    }
     


    return 0;
}

/*
Challenge 6: Calculating and displaying results
Two real numbers, a and b, are entered on the keyboard. Calculate and display a + b, a - b, a * b, and a / b with decimal precision.


*/