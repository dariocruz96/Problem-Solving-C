#include <stdio.h>
#include <ctype.h>

int main(void) {
  char letter;
  int ch;
  int sizeArray;
  int count;
  int array[100];

  //First we create our starting array
  printf("How many numbers would you like your array to have?\n");
  scanf("%d", &sizeArray);
  printf("Please enter the values:\n");
  while(count<sizeArray){
    scanf("%d", &array[count]);
    count++;
  }
  //We set the terminator after the last scanned array position
  array[sizeArray]=-1;
  //do...while loop, to keep running the menu so that the user can keep using the program
  do{
    printf("Please enter your choice from the following menu:\n");
    printf("A – Repopulate array\n");
    printf("B - Display all values\n");
    printf("C – Replace one number\n");
    printf("D – Calculate the mean\n");
    printf("E – Find largest number\n");
    printf("X – Exit program\n");
    
    letter = getchar();
    //Put the char scanned in uppercase to reduce conditions in if statements
    letter = toupper(letter);
    //If the inputed character is different from the ones the program asked for, it will show a error message and ask to try again
    while(letter!='A' && letter!='B' && letter!='C' && letter!= 'D' && letter!= 'E' && letter!= 'x' && letter!= 'X'){
    
    printf("Sorry, your input was not recognised, please enter either A, B, C, D, E or X:\n");
    letter = getchar();
    letter = toupper(letter);
  }
  //Creates a new array
  if(letter=='A'){
    count=0;
    printf("How many numbers would you like your array to have?\n");
    scanf("%d", &sizeArray);
    printf("Please enter the values:\n");
    while(count<sizeArray){
    scanf("%d", &array[count]);
    count++;
  }
  array[sizeArray]=-1;
  }
  //Prints the array
  else if(letter=='B'){
    for(int i=0; i<sizeArray; i++){
      printf("%d\n",array[i]);
    }
  }
  //Replaces a specific element of the array
  else if(letter=='C'){
    int replace;
    int value;
    printf("What element of the array would you like to replace?\n");
    scanf("%d", &replace);
    printf("What number would you like to put in that element?\n");
    scanf("%d", &value);
    array[replace-1] = value;
  }
  //Calculates the mean of the array values
  else if(letter=='D'){
    float result=0;
    for(int i=0; i<sizeArray; i++){
      result+= array[i];
    }
  printf("The mean of all array values is : %.2lf\n\n",result=result/sizeArray);
  }
  //Finds the largest number in the array
  else if(letter=='E'){
    int result;
    //This for cycle will compare the element 0 with the i, will store the largest number in the first position of the array, and will now compare the element 0 with the i+1, in the end we will have the largest number in the position 0
    for(int i=0; i<sizeArray; i++){
      if(array[0]<array[i]){
        array[0] = array[i];
      }
    }
  printf("The largest number of your array is : %d\n\n", array[0]);
    }
  }
  //This ends the loop if the user enters X whilst on the menu
  while(letter!='x' && letter!='X');
    return 0;
}