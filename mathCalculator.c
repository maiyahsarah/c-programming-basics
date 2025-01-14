#include <stdio.h>
int main() {
    char name[75];
    double num1, num2;
    char user_choice;
    int valid_operator=0; //flag variable
    printf("Hi! Welcome to Math Calculator.");
    printf("\nPlease enter your name: "); 
    gets(name); 
    printf("Hello %s! Welcome to Math Calculator.", name);
    printf("\nTo begin, please enter two numbers.");
    printf("\nFirst number: ");
    scanf("%lf", &num1);
    printf("Second number: ");
    scanf("%lf", &num2);
    printf("You have entered %lf and %lf.", num1, num2);
    while (!valid_operator){
        printf("\nEnter the symbol of the operation you'd perform(+, -, /, *): ");
        scanf("\n%c", &user_choice);
        switch(user_choice){
            case '+':
                printf("The addition of %lf and %lf is equal to %lf",num1, num2, num1+num2);
                valid_operator=1; //after break it will go back to while and
                //since valid_oprator is 1 and the condition in while will be valid_operator=0
                break;
            case '-':
                printf("The subtraction of %lf and %lf is equal to %lf",num1, num2, num1-num2);
                valid_operator=1;
                break;
            case '*':
                printf("The multiplication of %lf and %lf is equal to %lf", num1, num2, num1*num2);
                valid_operator=1;
                break;
            case '/':
                if (num2==0){
                    printf("Invalid. Division by zero.");
                    valid_operator=1;
                    break;
                }
                else{
                    printf("The divsion of %lf by %lf is equal to %lf", num1, num2, num1/num2);
                    valid_operator=1;
                    break;
                }
            default:
                printf("Invalid operator!");
            }
    }
    printf("\nThank you for using Math Calculator!");
    return 0;
    }