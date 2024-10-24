/*
A C program that takes three sides as runtime input and checks whether a triangle can exist with these sides or not.

File: triangle.c
Author: Biranchi Kulesika
Date: 23 Sep, 2024
*/

#include <stdio.h>

int main() {
  int a, b, c;

    printf("\n\nEnter the three side of the triangle:");
    printf("\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    //The sum of any two side of a triangle is always greater than the third side.
    if ((a + b) > c && (a + c) > b && (b+c) > a){
        printf("\nTriangle with the sides %d, %d and %d exists.\n\n", a, b, c);
    }
    else{
        printf("\nTriangle with the sides %d, %d and %d doesnt exist.\n\n", a, b, c);
    }
  return 0;
}