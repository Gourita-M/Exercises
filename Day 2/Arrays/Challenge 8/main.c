#include <stdio.h>

int main(){
    int numbers[10]={6,5,1,9,8,7,5,65,9,8};

    printf("Displaying Odd Numbers Only:\n");
    for (int i=0 ; i < 10 ; i++)
         if(numbers[i] % 2 != 0)
              printf("%d\n",numbers[i]);

    return 0;
}
/*
Challenge 13: Show Odd Items
Write a C program that displays only the odd elements of an integer array. 
The program should ask for the number of elements and the elements in the array.
*/