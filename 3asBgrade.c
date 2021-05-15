#include <stdio.h>
#include <math.h>

int main(void) {
  char letter;
  int ch;
  //While the user doesn't press 'x' or 'X' in the main menu, the program will continue to run
  while(letter!='x' && letter!='X'){
  //Shows the options to user and asks him to choose one
  printf("Please enter the letter which corresponds with your choice:\n");
  printf("a – Calculate the area of a rectangle\n");
  printf("b - Calculate the area of a circle\n");
  printf("c – Display a multiplication table\n");
  printf("d – Add two numbers\n");
  printf("x – Exit program\n");
  scanf("%c", &letter);
  //If the inputed character is different from the ones the program asked for, it will show a error message and ask to try again
  while(letter!='a' && letter!='b' && letter!='c' && letter!= 'd' && letter!='A' && letter!='B' && letter!='C' && letter!= 'D' && letter!= 'x' && letter!= 'X'){
    
    printf("Sorry, your input was not recognised, please enter either a, b, c or d:\n");
    scanf("%c", &letter);
    
  }
  //Switch statement to select the function that the user choosed
  switch(letter){
    float width, height,radius,firstNumber,secondNumber;
    int tableNumber;
    int i;
    //If the user choosed 'a' or 'A', the program will calculate the area of a rectangle
    case 'a':
    case 'A':
      printf("You have selected - 'a – Calculate the area of a rectangle'\n");
      //Asking for the width of the rectangle
      printf("Please enter the width:\n");
      scanf("%f", &width);
      //Asking for the height of the rectangle
      printf("Please enter the height:\n");
      scanf("%f", &height);
      //Printing the area of the rectangle doing width * height
      printf("The area is: %.2lf\n", width*height);
      //This while loop as the objective to clear input buffer 
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;
      
    case 'b':
    case 'B':
      printf("You have selected - 'b - Calculate the area of a circle'\n");
      //Asking the radius of the circle
      printf("Please enter the radius:\n");
      scanf("%f", &radius);
      //Printing the circle area doing radius * pi
      printf("The area is: %.2lf\n", radius*M_PI);
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;

    case 'c':
    case 'C':
      printf("You have selected - 'c – Display a multiplication table'\n");
      //Asking the number of the multiplication table
      printf("Please enter the a number:\n");
      scanf("%d", &tableNumber);
      //Printing the multiplication table for the number given by the user. 
      printf("The multiplication table for %d is:\n", tableNumber);
      //The cicle for will multiply the given number for 1 to 10
      for(i=1;i<11; i++){
        printf("%d x %d = %d\n",i, tableNumber, tableNumber*i);
      }
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;

    case 'd':
    case 'D':
      printf("You have selected - 'd – Add two numbers'\n");
      //Asking the first number
      printf("Please enter the first number:\n");
      scanf("%f", &firstNumber);
      //Asking the second number
      printf("Please enter the second number:\n");
      scanf("%f", &secondNumber);
      //Printing the addition result form the first and second number
      printf("The addition from %.2lf and %.2lf is %.2lf.\n", firstNumber, secondNumber, firstNumber+secondNumber);
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;
  }
  }
  return 0;
}