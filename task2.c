#include <stdio.h>
int main() {


int num1, num2;
char operator;
printf("Enter an integer, an operator from(+,-,*,/) and another integer: ");
scanf("%d%c%d",&num1,&operator,&num2);

if(operator=='+'){
printf("\n%d",num1+num2);}

else if(operator=='-')
{
printf("\n%d", num1-num2);
}
else if(operator=='*')
printf("\n%d",num1*num2);
else if(operator=='/')
{
if(num2!=0)
printf("\n%d",num1/num2);
else
printf("\nDivision by zero!");
}
else
printf("\nInvalid operator");


return 0;
}