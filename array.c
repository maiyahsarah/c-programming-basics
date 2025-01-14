//array
#include <stdio.h>
#define STUDENT_NUM 10
int main()
{
int number[STUDENT_NUM];
int i, total;
float average;
total=0;

for(i=1;i<=STUDENT_NUM;i++)
{
printf("\nEnter the mark of student %d ",i);
scanf("%d", &number[i]);
printf("\nMarks of student %d is %d",i, number[i]);
total=total+number[i];
}
average=total/10.0;
printf("\nThe average of the 10 students is %.2f",average);

for(i=1;i<=STUDENT_NUM;i++)
{
printf("\nMarks of student %d is %d",i, number[i]);
}



return 0;
}