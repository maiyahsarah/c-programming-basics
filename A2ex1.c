#include <stdio.h>
int main(){
int salary;

printf("Enter your salary: ");
scanf("%d", &salary);
if (salary>5000) {
printf("High salary");
}

else if(salary>=3000 && salary<=5000){
printf("Moderate salary");
}

else{
printf("Low salary");
}
return 0;
}