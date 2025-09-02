#include <stdio.h>

int main() {
    char firstname[20];
    char lastname[20];
    int age;
    char gender[10];
    char email[30];
    
    printf("Enter Your First Name:");
       scanf("%s",&firstname);
       
       printf("\n");
       
       printf("Enter Your Last Name:");
       scanf("%s",&lastname);
       
       printf("\n");
       
       printf("Enter Your Age:");
       scanf("%d",&age);
       
       printf("\n");
       
       printf("Enter Your Gender (Male or Female ):");
       scanf(" %s",&gender);
       
       printf("\n");
       
       printf("Enter Your email:");
       scanf("%s",&email);
       
       printf("\n");
       
       printf("Your Name is %s %s You are %d Years old %s\n",firstname,lastname,age,gender);
       printf("Your email is : %s",email);

    return 0;
}