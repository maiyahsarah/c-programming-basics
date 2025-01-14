//trial 1
#include <stdio.h>
int main(){
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name); //scanf will not catch the whitespace or any character/string after scanf

    printf("\nYour name is %s", name);
    return 0;

}