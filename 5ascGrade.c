#include <stdio.h>
#include <ctype.h>

int main(void) {
  char letter;
  int ch;
  int array[5];
  array[0]=8;
  array[1]=6;
  array[2]=9;
  array[3]=15;
  array[4]=22;
do{
  printf("Please enter your choice from the following menu:\n");
  printf("A – Repopulate array\n");
  printf("B - Display all values\n");
  printf("C – Replace one number\n");
  printf("D – Calculate the mean\n");
  printf("E – Find largest number\n");
  printf("X – Exit program\n");
  scanf("%c", &letter);
      while ((ch = getchar()) != '\n' && ch != EOF);
        //If the inputed character is different from the ones the program asked for, it will show a error message and ask to try again
  while(letter!='a' && letter!='b' && letter!='c' && letter!= 'd' && letter!= 'e' && letter!='A' && letter!='B' && letter!='C' && letter!= 'D' && letter!= 'E' && letter!= 'x' && letter!= 'X'){
    
    printf("Sorry, your input was not recognised, please enter either A, B, C, D, E or X:\n");
    scanf("%c", &letter);
  }
  letter = toupper(letter);

if(letter=='A'){
  int i;
  int value;
  for(int i=0; i<=4; i++){
  
    printf("Please enter the new value for the array position %d\n", i);
  scanf("%d", &value);
      while ((ch = getchar()) != '\n' && ch != EOF);
  array[i]=value;
  }
}
else if(letter=='B'){
  for(int i=0; i<=4; i++){
  
    printf("Array[%d]=%d\n", i,array[i]);
  }
}
else if(letter=='C'){
  char replace;
  int value;
  printf("What element of the array would you like to replace?\n");
  scanf("%c", &replace);
      while ((ch = getchar()) != '\n' && ch != EOF);
  printf("What number would you like to put in that element?\n");
  scanf("%d", &value);
  array[replace] = value;
}
else if(letter=='D'){
  int result=0;
  for(int i=0; i<=4; i++){
    result+= array[i];
  }
  printf("The mean of all array values is : %d\n\n",result=result/5);
}
else if(letter=='E'){
  int result;

  for(int i=0; i<=4; i++){
    if(array[0]<array[i]){
      array[0] = array[i];
    }
  }
  printf("The largest number of your array is : %d\n\n", array[0]);
}
}
while(letter!='x' && letter!='X');
  return 0;
}