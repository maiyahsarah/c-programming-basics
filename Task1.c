//Create a C program that is able to compute the area of a square, 
//the area of a triangle and circle. The program should ask inputs 
//from user to store the values and produce the outputs.
#include <stdio.h>
#define PI 3.14
int main() {
    float radius, height, width, side, area_triangle, area_circle, area_square;
    //area for square
    printf("Enter the value of the one side of the square(in cm): ");
    scanf("%f", &side);
    while (side<=0)
    {
        printf("Please enter a positive value of the one side of the square(in cm): ");
        scanf("%f", &side);
    }
    area_square=side*side;
    //area of triangle
    printf("Enter the height of the triangle(in cm): ");
    scanf("%f", &height);
    while (height<=0)
    {
        printf("Please enter a positive value of the height of the triangle(in cm): ");
        scanf("%f", &height);
    }
    printf("Enter the width of the triangle(in cm): ");
    scanf("%f", &width);
    while (width<=0)
    {
        printf("Please enter a positive value of the width of the triangle(in cm): ");
        scanf("%f", &width);
    }
    area_triangle=0.5*height*width; 
    //area of circle
    printf("Enter the radius of the circle(in cm): ");
    scanf("%f", &radius);
    while (radius<=0)
    {
        printf("Please enter a positive value of the radius of the circle(in cm): ");
        scanf("%f", &radius);
    }
    area_circle=PI*(radius*radius);
    //print values of areas
    printf("The area of the square of side value %f cm is %f cm^2.", side, area_square);
    printf("\nThe area of the triangle of a height of %f cm and a width of %f cm is %f cm^2.", height, width, area_triangle);
    printf("\nThe area of the circle with a radius of %f cm is %f cm^2.", radius, area_circle);
    return 0;
}