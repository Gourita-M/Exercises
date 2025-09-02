#include <stdio.h>

int main(){

    int h1,m1,s1;
    int h2,m2,s2;

    printf("Enter the first One (HH:MM:SS): ");
       printf("HH:");
         scanf("%d",&h1);
       printf("MM:");
         scanf("%d",&m1);
       printf("SS:");
         scanf("%d",&s1);
      
    printf("Enter the Second One (HH:MM:SS): ");
        // scanf("%d:%d:%d",&h2,&m2,&s2);

    printf("HH:");
         scanf("%d",&h2);
       printf("MM:");
         scanf("%d",&m2);
       printf("SS:");
         scanf("%d",&s2);


     if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("The first comes before the Second.\n");
    } 
    else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("The second One comes before the first.\n");
    } 
    else {
        printf("They are the same.\n");
    }

    
    return 0;
}
/*
Challenge 12: Comparing Moments
Write a C program that reads two instants in the format HH:MM:SS and displays one of 
the following messages:

The first moment comes before the second;
The second moment comes before the first;
It's the same moment.
*/


