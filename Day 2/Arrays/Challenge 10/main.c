#include <stdio.h>

int main() {
    int n, sear, found = 0;

    
    printf("Enter the number of elements: ");
          scanf("%d", &n);

    int array[n]; 

  
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }


    printf("Enter the element to search: ");
          scanf("%d", &sear);

    for(int i=0 ; i < n ; i++){

        if( array[i] == sear)
          found = 1 ;

    }
     
     if(found)
        printf("The Element (%d) is Present ",sear); 
        
        else 
          printf("The Element (%d) is Not Present ",sear);
    
    return 0;
}





/*
Challenge 10: Search for an Item
Write a C program that searches for a specific element in an array of integers using a linear search. 
The program should ask the user for the number of elements, the elements in the array, 
and the element to search for, and then display whether the element is present or not.
*/