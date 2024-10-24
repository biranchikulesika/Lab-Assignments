/*
A C program to check whether an integer given as run-time input is even or odd without using the modulo operator(%).

File: oddeven.c
Author: Amruta Sunandini Das
Date: 12 Sep, 2024
*/

#include <stdio.h>

int main() 
{
    int num;

    printf("\n\nEnter an integer: ");
    scanf("%d", &num);

    if (num & 1)
    {
        printf("%d is odd.\n\n", num);
    } 
    else 
    {
        printf("%d is even.\n\n", num);
    }

    return 0;
}