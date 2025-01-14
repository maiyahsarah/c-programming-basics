#include <stdio.h>

int main()
{
int base=32;
float conversion_factor=9.0/5.0;

double fahrenheitTemp;

int celsiusTemp=24;

fahrenheitTemp= (conversion_factor * celsiusTemp) + base;

printf("Celsius Temperature: %d \n", celsiusTemp);
printf("Fahrenheit Equivalent: %.2lf", fahrenheitTemp);

}