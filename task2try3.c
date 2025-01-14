#include <stdio.h>
int main()
{
int num1, num2;
char operator;

printf("Enter number: ");
scanf("%d",&num1);
printf("Enter an operator: ");
scanf("\n %c",&operator);
printf("Enter num2: ");
scanf("%d",&num2);

if(operator=='+')
{
printf("%d",num1+num2);
}

}