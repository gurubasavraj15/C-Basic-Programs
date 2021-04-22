#include <stdio.h>

int main() {
  float num1, num2;
  printf("Please enter the first number!\n");
  scanf("%f", &num1);
  printf("Please enter the second number!\n");
  scanf("%f", &num2);
  float difference = num1 - num2;
  printf("Difference between %f and %f is %f", num1, num2, difference);
}
