#include <stdio.h>

int main(void) 
  { 
     int speed;
     printf("enter your speed as integer:");
     scanf("%d",&speed);
     speed= (speed<=65)? (65) : (speed<=70)? (70) : (90);
     switch (speed) {
         case 65: printf("no speeding tickets");break;
         case 70: printf("speeding ticket");break;
         case 90: printf("expensive speeding ticket");break;
         default: printf("incorrect speed value.");break;
         
     }
     return 0;
  } 
