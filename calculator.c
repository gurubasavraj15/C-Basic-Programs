#include <stdio.h>

int main(void) {
  char operation;
  float num1, num2;
  printf("Which operation you would like to perform!\n");
  scanf("%c", &operation);
  printf("Please enter the first number!\n");
  scanf("%f", &num1);
  printf("Please enter the second number!\n");
  scanf("%f", &num2);
  switch(operation){
    case '+':
    printf("Sum of %f and %f is %f", num1, num2, num1+num2);
    break;

    case '-':
    printf("Difference between %f and %f is %f", num1, num2, num1-num2);
    break;

    case '*':
    printf("Product of %f and %f is %f", num1, num2, num1*num2);
    break;

    case '/':
    printf("Quotient of %f and %f is %f", num1, num2, num1/num2);
    break;

    default:
    printf("Error, Not a valid operation!\n");
  }
  return 0;
}
