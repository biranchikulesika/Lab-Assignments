/*
A C program to calculate the area perimeter and area of a Rectangle based on the side entered by the user.

File: rectangle.c
Author: Biranchi Kulesika
Date: 2 Sep, 2023
*/

#include <stdio.h>

int main()
{
    double length, breadth, perimeter, area;

    printf("\n\nEnter the length of the Rectangle: ");
    scanf("%lf", &length);

    printf("\nEnter the breadth of the Rectangle: ");
    scanf("%lf", &breadth);

    perimeter = 2*(length + breadth);
    area = length*breadth;

    printf("\n\nLength: %.2lf, Breadth: %.2lf", length, breadth);
    printf("\nPerimeter: %.2lf units", perimeter);
    printf("\nArea: %.2lf square units\n\n", area);

    return 0;
}