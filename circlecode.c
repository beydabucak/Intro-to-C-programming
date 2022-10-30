#include <stdio.h>
#define PI 3.14159
int main() {
double area=0.0, radius=0.0;
printf("enter radius:");
scanf("%lf",&radius);
area=PI*radius*radius;
printf("radius of %lf meters; area is %lf m2 \n",radius,area);
return 0;
}
