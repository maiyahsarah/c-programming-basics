#include <stdio.h>

int main(){
printf("%d\n", 455);
printf("%i\n", 455);   /* i is same as d in printf */

printf("%d\n", +455);  /* only minus sign prints */
                       /* plus sign are suppressed */
printf("%d\n", -455);
printf("%d\n", 455);

printf("%u\n", -455); /* programming error */
                      /* because unsigned cannot represent negative number*/

printf("%u\n", +455);
printf("%u\n", 455);

printf("%o\n", 455);

printf("%x\n", 455);
printf("%X\n", 455);

printf("%hd\n", 32000);
printf("%ld\n", 2000000000L);
}