//trial 3
#include <stdio.h>
int main(){
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); //fgets catch on whitespaces
    

    printf("\nYour name is %s", name);
    return 0;

}