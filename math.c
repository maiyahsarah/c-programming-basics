#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
int a=16, h;
h=sqrt(a);
printf("%d",h);

printf("\n");

char s1[10]="Hello";
char s2[10]="World";
strncat(s1,s2,3);    // append 3 characters from s2 to s1
printf("Concentenation using strcat: %s",s1);


}