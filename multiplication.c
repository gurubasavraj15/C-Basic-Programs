#include <stdio.h>
int main(){
  float num1, num2;
  printf("Please enter the first number!\n");
  scanf("%f", &num1);
  printf("Please enter the second number!\n");
  scanf("%f", &num2);
  float product = num1 * num2;
  printf("Product of %f and %f is %f", num1, num2, product);
}
