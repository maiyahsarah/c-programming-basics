//inverved triangle

#include <stdio.h>
int main(){
int i, j, lines, k;
printf("\n\n");
 // inverted triangle
printf("Enter number of lines: ");
scanf("%d",&lines);
for(i=0;i<=lines;i++)
{
for(j=lines;j>i;j=j-1)
{
printf("*");
}
printf("\n");
}

printf("\n\n");



//
for(i=1;i<=lines;i++)
{
for(j=lines;j>i;j--)
{
printf(" ");
}
for(k=0;k<i;k++)
{
printf("*");
}
printf("\n");

}
return 0;
}









 
 
 
 
 