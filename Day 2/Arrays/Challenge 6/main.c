#include <stdio.h>

int main() {
   int arry[10]={10,20,50,44,64,654,97,6465,12,31};
   int arrycopy[10];

   printf("Existing Numbers Are:\n");
   for (int i=0 ; i < 10 ; i++){
        arrycopy[i]=arry[i];
     printf("%d . ",arry[i]);
   }
   printf("\nThe Copied Numbers are:\n");
  
   for( int i=0 ; i < 10 ; i++){
   printf("%d . ",arrycopy[i]);
   }
    return 0;
}
