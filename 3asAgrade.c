#include <stdio.h>
#include <math.h>

int main(void) {
  char letter;
  int ch;

do{
  printf("Please enter the letter which corresponds with your choice:\n");
  printf("a – Calculate the area of a rectangle\n");
  printf("b - Calculate the area of a circle\n");
  printf("c – Display a multiplication table\n");
  printf("d – Add two numbers\n");
  printf("x – Exit program\n");
  scanf("%c", &letter);

  while(letter!='a' && letter!='b' && letter!='c' && letter!= 'd' && letter!='A' && letter!='B' && letter!='C' && letter!= 'D' && letter!= 'x' && letter!= 'X'){
    
    printf("Sorry, your input was not recognised, please enter either a, b, c or d:\n"); while ((ch = getchar()) != '\n' && ch != EOF);
    scanf("%c", &letter);
  }

  switch(letter){
    float width, height,radius,firstNumber,secondNumber;
    int tableNumber;
    int i;

    case 'a':
    case 'A':
      printf("You have selected - 'a – Calculate the area of a rectangle'\n");
      printf("Please enter the width:\n");
      scanf("%f", &width);
      printf("Please enter the height:\n");
      scanf("%f", &height);
      printf("The area is: %.2lf\n", width*height);
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;
      
    case 'b':
    case 'B':
      printf("You have selected - 'b - Calculate the area of a circle'\n");
      printf("Please enter the radius:\n");
      scanf("%f", &radius);
      printf("The area is: %.2lf\n", radius*M_PI);
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;

    case 'c':
    case 'C':
      printf("You have selected - 'c – Display a multiplication table'\n");
      printf("Please enter the a number:\n");
      scanf("%d", &tableNumber);
      printf("The multiplication table for %d is:\n", tableNumber);
      for(i=1;i<11; i++){
        printf("%d x %d = %d\n",i, tableNumber, tableNumber*i);
      }
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;

    case 'd':
    case 'D':
      printf("You have selected - 'd – Add two numbers'\n");
      printf("Please enter the first number:\n");
      scanf("%f", &firstNumber);
      printf("Please enter the second number:\n");
      scanf("%f", &secondNumber);
      printf("The addition from %.2lf and %.2lf is %.2lf.\n", firstNumber, secondNumber, firstNumber+secondNumber);
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;
  }
  }
    while(letter!='x' && letter!='X');
  return 0;
}