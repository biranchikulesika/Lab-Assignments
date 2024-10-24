/*
A C program to calculate the area perimeter and area of a square based on the side entered by the user.

File: square.c
Author: Biranchi Kulesika
Date: 2 Sep, 2023
*/

#include <stdio.h>

int main()
{
	float side, perimeter;
	double area;
	
	printf("\n\nEnter the side of the square: ");
	scanf("%f", &side);
	
	perimeter = 4*side;
	area = side*side;
	
	printf("\n\nSide of the square: %.2f", side);
	printf("\nPerimeter: %.2f units", perimeter);
	printf("\nArea: %.2lf square units\n\n", area);

	return 0;
}