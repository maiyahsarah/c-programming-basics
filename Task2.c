//Create a C program that is able to calculate the speed travelled by a car,
//time taken to reach the destination and distance travelled along the journey.
#include <stdio.h>
int main() {
    float speed, distance, time_taken;
    int choice;
    printf("Please choose a number based on what you'd like to calculate from the choices below:");
    printf("\n1. Speed");
    printf("\n2. Distance");
    printf("\n3. Time Taken.\n");
    scanf("\n%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Enter the distance travelled(in km): ");
            scanf("%f", &distance);
            printf("Enter the time taken(in hrs): ");
            scanf("%f", &time_taken);
            speed=distance/time_taken;
            printf("Speed: %.2f km/hr.", speed);
            break;
        case 2:
            printf("Enter the speed(in km/hr): ");
            scanf("%f", &speed);
            printf("Enter the time taken(in hrs): ");
            scanf("%f", &time_taken);
            distance=speed*time_taken;
            printf("Distance travelled in %.2f hours is %.2f km.", time_taken, distance);
            break;
        case 3:
            printf("Enter the distance travelled(in km): ");
            scanf("%f", &distance);
            printf("Enter the speed(in km/hr): ");
            scanf("%f", &speed);
            time_taken=distance/speed;
            printf("Time taken to reach destination is %.2f hours.", time_taken);
            break;
    }
return 0;
    }