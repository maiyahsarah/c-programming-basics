#include <stdio.h>
int k;
void function1();
void function2();
void function3();

void main() {
k=20;
function1();
function2();
function3();
printf("%d \n", k);
}

void function1()
{
k=k+10;
printf("%d \n",k);
}

void function2()
{
k=k+1000;
printf("%d \n",k);
}

void function3()
{
k=k+100;
printf("%d \n",k);
}