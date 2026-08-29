#include<stdio.h>

int main()
 {
  
  int num;
  int hundreds, tens, ones;
  
  printf("input integer ranging from 0 to 999:");
  scanf("%d", &num);
  
  hundreds = num / 100;
  tens = num % 100 / 10;
  ones = num % 10;
  
  printf("\nResults:\n");
  printf("Hundreds = %d\n", hundreds);
  printf("Tens = %d\n", tens);
  printf("Ones = %d\n", ones);
  
 }  

