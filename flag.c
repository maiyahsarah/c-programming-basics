#include <stdio.h>

int main(){
int c=1427;
double p=1427.0;

printf("%#o\n", c);
printf("%#x\n", c);
printf("%#X\n", c);
printf("\n%g\n", p);   /* %g remove tailing zero */

printf("%#g\n", p);    /* g gives a significant of 6 digit */
                       /* #g does not eliminate tailing zeros */
return 0;
}