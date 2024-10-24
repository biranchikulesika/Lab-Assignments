/*
A C program to find the smallest number among the three numbers given as run
time input using ternary/comparison operators

File: smallestNum.c
Author: Biranchi Kulesika
Date: 20 Sep, 2024
*/

#include <stdio.h>

int main() {
  int num1, num2, num3, smallest;

  printf("\n\nEnter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d", &num2);
  printf("Enter the third number: ");
  scanf("%d", &num3);

  printf("\nThe entered numbers are %d, %d and %d.", num1, num2, num3);

  smallest = (num1 < num2) ? ((num1 < num3) ? num1 : num3)
                           : ((num2 < num3) ? num2 : num3);

  // Print the largest number
  printf("\nhe smallest number is: %d\n", smallest);

  return 0;
}
