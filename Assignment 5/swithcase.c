/*
A C program that accepts a character from the standard input device and checks
whether it is an alphabet, digit, or special character using a switch-case
statement.

File: characters_switchcase.c
Author: Biranchi Kulesika
Date: 24 Sep, 2024
*/

#include <stdio.h>

int main() {
  char ch;

  printf("\n\nEnter a character: ");
  scanf("%c", &ch);
  printf("\n");

  switch (1) {
  case 1:
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
      printf("\"%c\" is an alphabet.\n\n", ch);
    } else if (ch >= '0' && ch <= '9') {
      printf("\"%c\" is a digit.\n\n", ch);
    } else {
      printf("\"%c\" is a special character.\n\n", ch);
    }
    break;
  }

  return 0;
}