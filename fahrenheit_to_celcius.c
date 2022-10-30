#include <stdio.h>
#include <string.h>

int main() {
int fahrenheit, celcius;
printf("please enter fahrenheit as an integer:");
scanf("%d",&fahrenheit);
celcius=(fahrenheit-32)/1.8;
printf("convertion of fahrenheit to celcius: %d",celcius);
return 0;
}
