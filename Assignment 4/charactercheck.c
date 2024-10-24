/*
A C program to input a character at runtime and check whether it is an alphabet,
digit, or special character. If the character is an alphabet, then check whether
it as a vowel or consonant and uppercase or lowercase.

File: charactercheck.c
Author: Biranchi Kulesika
Date: 23 Sep, 2024
*/

#include <ctype.h>
#include <stdio.h>

int main() {
  char ch;
  printf("\n\nEnter a character: ");
  scanf("%c", &ch);

  if (isalpha(ch)) {
    if (isupper(ch)) {
      if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("\"%c\" is a capital letter and a vowel.\n\n", ch);
      } else {
        printf("\"%c\" is a capital letter and a consonant.\n\n", ch);
      }
    } else {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("\"%c\" is a smallcase letter and a vowel.\n\n", ch);
      } else {
        printf("\"%c\" is a smallcase letter and a consonant.\n\n", ch);
      }
    }
  }

  else if (isdigit(ch)) {
    printf("\"%c\" is a digit.\n\n", ch);
  } else {
    printf("\"%c\" is a special character.\n\n", ch);
  }
  return 0;
}