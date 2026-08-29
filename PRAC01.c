#include<stdio.h>

int main()
 {
  /*
  Create a c program that will two integers. Compute and display the following: sum, difference, product, quotient with remainder.
  
  FILENAME: PRAC01.C
  */
  
  int num1;
  int num2;
  int sum, difference, product, quotient, remainder;
  
  printf("input integer 1: ");
  scanf("%d", &num1);
  
  printf("input integer 2: ");
  scanf("%d", &num2);
  
  sum = num1 + num2;
  difference = num1 - num2;
  product = num1 * num2;
  quotient = num1 / num2;
  remainder = num1 % num2;
  
  printf("\nResults:\n");
  printf("sum = %d\n", sum);
  printf("difference = %d\n", difference);
  printf("product = %d\n", product);
  printf("quotient = %d\n", quotient);
  printf("remainder = %d\n", remainder);
  
 }  

