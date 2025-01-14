#include <stdio.h>
int main()

{
    double num1;
    double num2;
    char op;
    
    printf("Enter the first number:");
    scanf("%lf", &num1);
    printf("Enter the second number:");
    scanf("%lf", &num2);
    printf("Enter operator :");
    scanf("\n %c",&op);
    
if(op=='+')
{
printf("Result = %.2f", num1+num2);
  }
  else if(op=='-')
  {
   printf("Result = %.2f", num1-num2);
  }
  else if(op=='*')
  {
   printf("Result = %.2f", num1*num2);
  }
  else if(op=='/')
  {
   printf("Result = %.2f", num1/num2);
  }
  
    return 0;
}