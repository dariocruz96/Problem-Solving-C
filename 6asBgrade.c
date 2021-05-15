#include <stdio.h>

int main(void) {
  int array[10];
  int count=0;
  int i=0;

  array[0]=6;
  array[1]=5;
  array[2]=3;
  array[3]=1;
  array[4]=2;
  array[5]=-1;
//This loop will print our starting array
while(array[count] != -1){
  printf("%d\n", array[count]);
    count++;
  }
  printf("\n");
  count = 0;
//This first while loop will increment the first comparable array value, the element "i"
while(array[i] != -1){
  count = i+1;
  //This second while loop will find the smallest value and put in in the element "i"
  while(array[count] != -1){
    int temp;
    if(array[i]>array[count]){
      temp=array[i];
      array[i]=array[count];
      array[count]=temp;
    }
    count++;
  }
  i++;
  }

  count=0;
//This loop will print our array after sorting
  while(array[count] != -1){
  printf("%d\n", array[count]);
    count++;
  }
  return 0;
}