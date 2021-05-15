#include <stdio.h>
#include <math.h>

//This funcion calculates the area of a rectangle
float areaRectangle(float width, float height){
  float result;
  result = width*height;
  return result;
}

//This funcion calculates the area of a circle
float areaCircle(float radius){
  float result;
  result = radius*M_PI;
  return result;
}

//This funcion multiplies 2 numbers
int multiplyTwoNumbers(int numberOne, int numberTwo){
  int result = numberOne*numberTwo;
  return result;
}

//This funcion prints out a multiplication table from 1 to 10
void multiplicationTable(int tableNumber){
int i;
printf("The multiplication table for %d is:\n", tableNumber);
  for(i=1;i<11; i++){
    int result = multiplyTwoNumbers(tableNumber, i);
    printf("%d x %d = %d\n",i, tableNumber, result);
  }
}


//This funciion adds 2 numbers
int addNumbers(float firstNumber, float secondNumber){
  float result = firstNumber + secondNumber;
  return result;
}

int main(void) {
  char letter;
  int ch;
  float width, height;

//This do starts the "do...while" loop, so the program will start running "do" and will repeat it untill the while condition is true ( in this case, until the user presses X whilst on menu)
do{
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
    
    printf("Sorry, your input was not recognised, please enter either a, b, c or d:\n"); while ((ch = getchar()) != '\n' && ch != EOF);
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
      //Get the result from the function areaRectangle using the parameters scaned
      float areaRec = areaRectangle(width, height);
      //Print the result from function areaRectangle
      printf("The area is: %.2lf\n", areaRec);
      //This while loop as the objective to clear input buffer 
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;
      
    case 'b':
    case 'B':

      printf("You have selected - 'b - Calculate the area of a circle'\n");
      //Asking the radius of the circle
      printf("Please enter the radius:\n");
      scanf("%f", &radius);
      //Get the result from the function areaCircle using the parameters scaned
      float areaCir = areaCircle(radius);
      //Print the result from function areaCircle
      printf("The area is: %.2lf\n", areaCir);
      
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;

    case 'c':
    case 'C':

      printf("You have selected - 'c – Display a multiplication table'\n");
      //Asking the number of the multiplication table
      printf("Please enter a number:\n");
      scanf("%d", &tableNumber);
      //This will call the funcion and the compiller will run the function, in this case it will not return a value, instead the function will do consecutive printfs providing the multiplication table of the number given
      multiplicationTable(tableNumber);

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
      //Get the result from the function addNumbers using the parameters scaned
      int add = addNumbers(firstNumber, secondNumber);
      //Print the result from function addNumbers
      printf("The addition from %.2lf and %.2lf is %dlf.\n", firstNumber, secondNumber, add);
      
      while ((ch = getchar()) != '\n' && ch != EOF);
      break;
  }
  }
   //If this condition is true, the program will end this cicle, if its false, it will run again starting in "do"
    while(letter!='x' && letter!='X');
  return 0;
}