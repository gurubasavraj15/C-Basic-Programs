#include <stdio.h>

int main(void) {
  float num1, num2;
  printf("Please enter the first number!\n");
  scanf("%f", &num1);
  printf("PLease enter the second number!\n");
  scanf("%f", &num2);
  float sum = num1 + num2;
  printf("Sum of %f and %f is %f", num1, num2, sum);
  return 0;
}
