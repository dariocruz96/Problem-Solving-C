#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int i,j,x,y,ch;
char letter;

//This function will display the map on the console and place the 'X' where the user wants
void displayMap(int i,int j){
  //This for loop is responsible for rows
  for(j=1; j<11; j++){
    //This for loop is responsible for columns
    for(i=1; i<11; i++){
      //This if statement will put an 'X' if the "coordinates" matches the ones scanned from the user
      if(i==x && j==y){
        printf("X");
      }
      //This else prints the dashes
      else{
      printf("-");
      }
    }
    //This printf will change the line after the 10 dashes in a row
      printf("\n");
  }
}

//This function will be responsible to move the 'X' around the map
void move(char m){
  //If the user presses 'a' program will decrement 1 to x, making the 'X' move left 1 space
  if(letter=='A'){
    x--;
  }
  //If the user presses 'd' program will increment 1 to x, making the 'X' move right 1 space
  else if(letter=='D'){
    x++;
  }
  //If the user presses 'w' program will decrement 1 to x, making the 'X' move up 1 space
  else if(letter=='W'){
    y--;
  }
  //If the user presses 'a' program will increment 1 to x, making the 'X' move down 1 space
  else if(letter=='S'){
    y++;
  }
  //In case the x variable reaches 0 it will change it's value to 10 in order to make the 'X' appear on the opposite side of the grid
  if(x==0){
    x=10;
  }
  //In case the x variable reaches a a value above 10 , it will give an absolute(positive) value between 1 to 10, the purpose it that when the x reaches 11, we will have 11/10=1, and with that we get the 'X' appear on the opposite side of the grid
  else if(x>10){
    x=abs(x/10);
  }
  //In case the y variable reaches 0 it will change it's value to 10 in order to make the 'X' appear on the opposite side of the grid
  if(y==0){
    y=10;
  }
  //In case the y variable reaches a a value above 10 , it will give an absolute(positive) value between 1 to 10, the purpose it that when the y reaches 11, we will have 11/10=1, and with that we get the 'X' appear on the opposite side of the grid
  else if(y>10){
    y=abs(y/10);
  }
}


int main(void) {


  //Asking the user to choose the first place to have the "X"
  printf("Please enter an X coordinate (a number between 1 and 10):\n");
  scanf("%d", &x);
  printf("Please enter an Y coordinate (a number between 1 and 10):\n");
  scanf("%d", &y);
  while ((ch = getchar()) != '\n' && ch != EOF);
  do{
    //This will display the map in the console
    displayMap(i, j);

  printf("Please enter the letter which corresponds with your choice:\n");
  printf("w – The X will move up 1 space\n");
  printf("a - The X will move left 1 space\n");
  printf("s – The X will move down 1 space\n");
  printf("d – The X will move right 1 space\n");
  printf("x – Exit program\n");
  //This scanf will get the variable responsible to "move" the 'X'
  scanf("%c",&letter);
  //This while loop as the objective to clear input buffer
  while ((ch = getchar()) != '\n' && ch != EOF);

  while(letter!='w' && letter!='a' && letter!='s' && letter!= 'd'  && letter!='W' && letter!='A' && letter!='S' && letter!= 'D' && letter!= 'x' && letter!= 'X'){
    
    printf("Sorry, your input was not recognised, please enter either w, a, s, d or x:\n");
    scanf("%c", &letter);
    while ((ch = getchar()) != '\n' && ch != EOF);
  }
  //toupper function will transform the letter scanned in uppercase, in this case there is no need to have an or condition in if statements
  letter = toupper(letter);
  move(letter);
  }
  //Thise while loop will make the program run untill the user presses 'x' when on the menu
  while(letter!='x' && letter!='X');
  return 0;
}