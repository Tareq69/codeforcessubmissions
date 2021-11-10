#include <stdio.h>
int main() {
  char ch;
  double a, b;
  printf("Enter an operator between (+, -, *, /): ");
  scanf("%c", &ch);
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);

  switch (ch) {
    case '+':
      printf("%lf + %lf = %lf", a, b, a + b);
      break;
    case '-':
      printf("%lf - %lf = %lf", a, b, a - b);
      break;
    case '*':
      printf("%lf * %lf = %lf", a, b, a * b);
      break;
    case '/':
      printf("%lf / %lf = %lf", a, b, a / b);
      break;
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
