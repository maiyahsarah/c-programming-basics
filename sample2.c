//trial 2
#include <stdio.h>
int main(){
    char name[50];

    printf("Enter your name: ");
    gets(name); //gets catch on whitespaces
    

    printf("\nYour name is %s", name);
    return 0;

}