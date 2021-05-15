#include <stdio.h>

int main(void) {
//position1 will set the position for the first 'X'
int position1;
//position2 will set the position for the second 'X',which will be determined by position1+position2
int position2;
//Variable that will make the incrementation of position
int i;
//Asking the user to choose the position for the first 'X' (Value of position1)
printf("Please enter a number between 1-20:\n");
scanf("%d",&position1);
//Asking the user to choose the position for the second 'X' (Value of position2)
printf("Please enter a second number:\n");
scanf("%d",&position2);
//This if statement will make sure the user types a number between 1 and 20, if not, will show a error message
if(position1 <1 || position1>20){
  printf("Sorry, the number needs to be between 1 and 20");
}
//This else statement will create the dashes line
else{
  //The for cycle will start with position 1, end at position 20 and will go one position forward after each interaction
  for(i=1; i<21; i++){
 //This if statement will switch the dash for an X in position1 and position1+position2 if the position1 and position1+position2 matches the position number
  if(i==position1 || i==position1+position2){
    printf("X");
    }
  //If the 2 'X' positions don't match the count, the program will just print a dash 
  else{
    printf("-");
  }
}
}
  return 0;
}