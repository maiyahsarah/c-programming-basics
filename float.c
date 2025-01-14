/* printing floating point numbers with floating
point conversion specifier */

#include <stdio.h>

int main() {
printf("%e\n", 123456.89);
printf("%e\n", +123456.89);
printf("%e\n", -123456.89);
printf("%E\n", 123456.89);
printf("%f\n", 123456.89);
printf("%g\n", 123456.89);
printf("%G\n", 123456.89);
printf("%g\n", 1234568.89);  /* exponential value is equal to 6 or greater then 6*/
printf("%g\n", 123456875.89);
printf("%e\n", 1234568.89);

}
/* e and E and f show a precision of 6 digits to the right of decimal*/

/* g and G show a precision of 6 digits from the left of decimal to the right*/
/* example 1.04592 */
/* g also removes trailing zero in for example 1.240000 */
/* to 1.24 */
