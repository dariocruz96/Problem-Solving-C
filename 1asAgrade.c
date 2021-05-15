//Program a simple calculator with '+'. '-', '*' and '/'
#include <stdio.h>

int main(void) {
  char operator;
  double x,y;

  printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&x, &y);
//We start providing the expression that will be compared if it matches with any case, in this case will be the operator
switch( operator )
{
    //If the operator entered by the user matches with this case (+), it will do x + y
    case '+':
      printf("%.2lf + %.2lf = %.2lf\n",x, y, x+y);
      break;

    //If the operator entered by the user matches with this case (-), it will do x - y
    case '-':
      printf("%.2lf - %.1lf = %.2lf\n",x, y, x-y);
      break;

    //If the operator entered by the user matches with this case (*), it will do x * y
    case '*':
      printf("%.2lf * %.1lf = %.2lf\n",x, y, x*y);
      break;

    //If the operator entered by the user matches with this case (+), it will do x / y
    case '/':
      printf("%.2lf / %.2lf = %.2lf\n",x, y, x/y);
      break;

    //If the user entered a different character then the 4 operators, the program will print a error message
    default:
      printf("Error! Operator is not correct\n");
}
  return 0;
}

(Since the operator is -, the control of the program jumps to)