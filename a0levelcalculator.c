#include <stdio.h>

int main() {
int number1, number2;
int operation;
printf("enter two numbers:");
scanf("%d %d",&number1, &number2);
printf("press 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division:");
scanf("%d",&operation);
switch(operation){
    case 1:
      printf("result: %d",(number1+number2));
      break;
    case 2:
      printf("result: %d",(number1-number2));
      break;
    case 3:
      printf("result: %d",(number1*number2));
      break;
    case 4:
      printf("result: %d",(number1/number2));
      break;
    default:
      printf("invalid");
}

return 0;
}
