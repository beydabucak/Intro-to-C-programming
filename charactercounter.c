#include <stdio.h>

int main(void) 
  { 
     int blanks=0, digits=0, letters=0, others=0;
     int c;
     while ((c=getchar()) != EOF) {
         if (c==' ')
           blanks++;
         else if (c>'a' && c<='z' || c>'A' && c<='Z')
           letters++;
         else if (c>=0 && c<=9)
           digits++;
         else
           others;
     }
     printf("digits: %d, letters: %d ",digits,letters);
     printf("\nblanks: %d, others: %d ",blanks,others);
     return 0;
  } 
