#include <stdio.h>
#include <strings.h>
#include <ctype.h>

int main(){
      char higher[40]={"BE OR NOT TO BE . YoU oR yOu"};

      for (int i = 0; higher[i] != '\0'; i++) {
        higher[i] = tolower(higher[i]);
    }

    printf("After Converting: %s",higher);


    return 0;
}

/*
Challenge 8: Converting to Lowercase
Write a C program that reads a string and converts all characters to lowercase. 
Display the modified string.

We can Use toupper to make them all high
*/