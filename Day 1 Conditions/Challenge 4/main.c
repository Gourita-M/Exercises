#include <stdio.h>

int main(){
        
      int num;
      int d1, d2, d3, d4;

       printf("Enter a four-digit integer: ");
          scanf("%d", &num);

    
    d1 = num / 1000;         
    d2 = (num / 100) % 10;   
    d3 = (num / 10) % 10;     
    d4 = num % 10;   

     printf("Reversed number: %d%d%d%d\n", d4, d3, d2, d1);
     

     // Using While loop to Reverse Bigger Numbers
     
     /*
     int num, revr = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        revr = revr * 10 + num % 10;  
        num = num / 10;      
    }

    printf("Reversed number: %d\n", revr);
    */

    return 0;
}
/*
Challenge 12: Four-digit whole number in reverse order
Write a C program to display a four-digit integer in reverse order without using a loop.
 For example, if the integer is 1234, its inverse is 4321.
*/