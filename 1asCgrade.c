#include <stdio.h>

int main(void) {
  //calculate how much a parcel delivery service will charge to deliver goods to a customer
  //This program will take in to account the amount the customer spent and how far (in miles) the carrier will have to travel to deliver the parcel.

  int cost;
  int mileage;

  printf("How much did your package cost?\n£");
  scanf("%d",&cost);
  printf("How far will the carrier have to travel?\nMiles: ");
  scanf("%d",&mileage);

  /*Delivery is free up to 10 miles, £10 over 10 miles, £15 over 20 miles, £20 over 30 miles
  -cost<=10 miles => free
  -10<mileage<=15 => 10£
  -15<mileage<=20 => 15£
  -20<mileage<=30 => 20£ */
  //We need mileages to be bigger then 0 (this will also give us the 0 as low limit in all coditions and with that we can have only one condition in the other else if)
  //If the mileage is smaller of equal to 10 miles the delivery fee will be free
  if(mileage>=0 && mileage<=10){
    printf("You paid: £%d.\n", cost);
    printf("You are %d miles away.\n", mileage);
    printf("The delivery fee is: free.\n");
    printf("The total cost is: £%d.\n", cost);
  }
  //If the mileage is bigger than 10 and smaller or equal to 20 miles the delivery fee will be £10
  else if(mileage<=20){
    printf("You paid: £%d.\n", cost);
    printf("You are %d miles away.\n", mileage);
    printf("The delivery fee is: £10.\n");
    //We need to add the delivery fee to the cost of the package giving us the total cost for the client
    cost+=10;
    printf("The total cost is: £%d.\n", cost);
  }
  //If the mileage is bigger than 15 and smaller or equal to 30 miles the delivery fee will be £15
  else if(mileage<=30){
    printf("You paid: £%d.\n", cost);
    printf("You are %d miles away.\n", mileage);
    printf("The delivery fee is: £15.\n");
    cost+=15;
    printf("The total cost is: £%d.\n", cost);
  }
  //If the mileage is bigger than 30 miles the delivery fee will be £20
  else{
    printf("You paid: £%d.\n", cost);
    printf("You are %d miles away.\n", mileage);
    printf("The delivery fee is: £20.\n");
    cost+=20;
    printf("The total cost is: £%d.\n", cost);
  }
  return 0;
}