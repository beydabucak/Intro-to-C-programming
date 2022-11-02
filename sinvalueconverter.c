#include <stdio.h>

#include <math.h>

int main()

{

double sinvalue, x;

printf(" enter the value: ");

scanf("%lf", &x);

sinvalue = sin(x);

printf("sin value of %lf = %f ", x, sinvalue);

return 0;

}
