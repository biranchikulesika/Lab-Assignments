/*
A C program to perform al basic arithmetic operations.

File: arithmetic_operations.c
Author: Biranchi Kulesika
Date: 2 Sep, 2023
*/

#include <stdio.h>

int main()
{
	int num1, num2;
	int sum, difference, product, quotient, remainder;
	
	printf("\nEnter the first integer: ");
	scanf("%d", &num1);
	
	printf("\nEnter the second integer: ");
	scanf("%d", &num2);
	
	printf("\nThe entered numbers are %d and %d.\n", num1, num2);
	
	sum = num1 + num2;
	difference = num1 - num2;
	product = num1*num2;
	quotient = num1/num2;
	remainder = num1%num2;
	
	printf("Sum: %d\n", sum);
	printf("Difference: %d\n", difference);
	printf("Product: %d\n", product);
	printf("Quotient: %d\n", quotient);
	printf("Remainder: %d\n\n", remainder);
	
	return 0;
	
}