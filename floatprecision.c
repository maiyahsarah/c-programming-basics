#include <stdio.h>

int main(){
int i=873; /* initialize int i */
double f= 123.94536;
char s[]="Happy Birthday";

printf("Using precision for integers \n");
printf("\t%.4d\n\t%.9d\n\n", i,i);

printf("Using precision for floating point number\n");
printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);

printf("Using precision for strings\n");
printf("\t%.11s\n",s);

printf("%09.3f\n", 123.456789);

printf("%10f\n",1.23);
printf("%f\n",1.23);    /* f format gives six precision degit after decimal */
}