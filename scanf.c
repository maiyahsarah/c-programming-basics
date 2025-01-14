#include <stdio.h>

int main()
{
int a;
int b;
int c;
int d;
int e;
int f;
int g;

printf("Enter seven integers: ");
scanf("%d %i %i %i %o %u %x", &a, &b, &c, &d, &e, &f, &g);

printf("The input displayes as decimal integers is: \n");
printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);

return 0;
}