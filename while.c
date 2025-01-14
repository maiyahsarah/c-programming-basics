// while loop program

#include <stdio.h>
int main() {
int selection=0;

printf("Select from 1-4 ");
scanf("%d",&selection);

while (selection!=4)
{
switch (selection)
{
case 1:
printf("\nYou chose number 1\n");
break;
case 2:
printf("You chose number 2\n");
break;
case 3:
printf("You chose number 3\n");
break;
default:
printf("Please choose menu given\n");
}
printf("Select from 1-4 ");
scanf("%d",&selection);

}



}