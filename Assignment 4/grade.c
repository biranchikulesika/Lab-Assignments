/*
A C program to input the marks for various subjects, calculate the percentage, and
find the grade.

File: grade.c
Author: Biranchi Kulesika
Date: 23 Sep, 2024
*/

#include <stdio.h>

int main() {
  float phy, chem, math, bio, comp, total_marks, percentage;
  char grade;

  printf("\n\nEnter marks for the following subjects:\n");

  printf("Physics: ");
  scanf("%f", &phy);

  printf("Chemistry: ");
  scanf("%f", &chem);

  printf("Math: ");
  scanf("%f", &math);

  printf("Biology: ");
  scanf("%f", &bio);

  printf("Computer Science: ");
  scanf("%f", &comp);

  total_marks = phy + chem + math + bio + comp;

  if (total_marks > 500) {
    printf("\nTotal marks cannot exceed 500. Try again.\n");
    return 1;
  }

  percentage = total_marks / 5;

  if (percentage >= 90) {
    grade = 'A';
  } else if (percentage >= 80) {
    grade = 'B';
  } else if (percentage >= 70) {
    grade = 'C';
  } else if (percentage >= 60) {
    grade = 'D';
  } else if (percentage >= 40) {
    grade = 'E';
  } else {
    grade = 'F';
  }

  printf("\nTotal Marks: %.2f\n", total_marks);
  printf("Percentage: %.2f%%\n", percentage);
  printf("Grade: %c\n\n", grade);

  return 0;
}