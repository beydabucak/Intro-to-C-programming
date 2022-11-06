 #include <stdio.h>


int main(void) {
const int size = 5;
int grades[5]={10,20,30,40,50};
double sum = 0;
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
}
