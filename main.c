#include <stdio.h>
int main() {
  char oparator;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &oparator);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (oparator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct");
  }
}