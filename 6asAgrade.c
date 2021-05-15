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

for(int i; i < 5; i++){
  int key = array[i];
  int j = i-1;

  while(key < array[j] && j>=0) {
    array[j +1] = array[j];
    --j;
  }
  array[j+1] = key;
  }

count=0;
//This loop will print our array after sorting
  while(array[count] !=-1){
  printf("%d\n", array[count]);
    count++;
  }
  return 0;
}