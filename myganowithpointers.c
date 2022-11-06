#include <stdio.h>


int main(void) {
const int size = 5;
int grades[5]={10,20,30,40,50};
double sum=0.00;
double *pointer = &sum;
int i;
printf("my grades are:");
for (i=0;i<size;++i) {
    printf("%d",grades[i]);
    printf(", ");
}
for (i=0;i<size;++i) {
    sum=sum+grades[i];
}
printf("average: %1.f",sum/size);
printf("\n\n sum is at the %lu or %p and is %lf",pointer,pointer,*pointer);
printf("\n\n grades are at the %lu or %p and are %lf",grades,grades,*grades);
}
