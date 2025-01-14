// do while program example

#include <stdio.h>
int main()
{

int selection=0;

do{
printf("\nSelect from 1-4 ");
scanf("%d",&selection);
printf("\nYou chose number %d",selection);
selection++;
}
while(selection<4);

}