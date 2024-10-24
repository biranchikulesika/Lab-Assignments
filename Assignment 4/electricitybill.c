/*
A C program to calculate the electricity bill based on the given criteria.

*The first 50 units costs ₹0.5 per unit.
*The first 100 units costs ₹1.5 per unit.
*The first 100 units costs ₹4.5 per unit.
*Above 250 units costs ₹7.5 per unit.

File: electricitybill.c
Author: Biranchi Kulesika
Date: 23 Sep, 2024
*/

#include <stdio.h>

int main() {

  int units;
  float cost, fbill;

  printf("\n\nEnter the total number of units consumed: ");
  scanf("%d", &units);

  if (units <= 50) {
    cost = units * 0.5;
  } else if (units <= 150) {
    cost = 25 + (units - 50) * 1.5;
  } else if (units <= 250) {
    cost = 175 + (units - 150) * 4.5;
  } else {
    cost = 625 + (units - 250) * 7.5;
  }
  float surcharge = cost * .2;
  fbill = cost + surcharge;

  printf("\nCost before surcharge: ₹%.2f", cost);
  printf("\nSurcharge: ₹%.2f", surcharge);
  printf("\nThe final bill: ₹%.2f", fbill);

  return 0;
}