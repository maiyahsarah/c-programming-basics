#include <stdio.h>
#include <math.h>
#define PI 3.142 

int main(){
int r=6;
float volume;
float surface_area;

volume=(4.0/3.0)*PI*pow(r,3);
surface_area=4*PI*pow(r,2);

printf("The volume of the sphere is %.3f\n",volume);
printf("The Surface Area of sphere is %.3f\n", surface_area);

return 0;
}