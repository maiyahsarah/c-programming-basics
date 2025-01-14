// for loop program

#include <stdio.h>
int main() {
int lines;
int i;
int j;
 printf("Enter the number of lines: ");
 
 scanf("%d",&lines);
 
 for(i=0;i<lines;i++)
 {
 printf("****\n");
 }
 
 // right angle triangle
 printf("\n\n");
 
 for(i=0;i<=lines;i++)
 {
 for(j=0;j<i;j++)
 {
 printf("*");
 }
 printf("\n");
 }
 
 }
 
 