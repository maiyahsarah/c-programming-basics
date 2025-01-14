#include <stdio.h>
#include <math.h>

int main(){
float a=2.0;
float b=5.0;
float c=6.0;
float x=2.0;
float y;

y=(2*pow(x,2)+3)/(2*a) + b*x + c;
printf("The value of y is %.2f\n", y);

return 0;
}