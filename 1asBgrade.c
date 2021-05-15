#include <stdio.h>

int main(void) {
  //calculate how much a parcel delivery service will charge to deliver goods to a customer
  //This program will take in to account the amount the customer spent and how far (in miles) the carrier will have to travel to deliver the parcel.

  double cost;
  int mileage;

  printf("How much did your package cost?\n£");
  scanf("%lf",&cost);
  printf("How far will the carrier have to travel?\nMiles: ");
  scanf("%d",&mileage);

  /*Delivery is free up to 10 miles, £10 over 10 miles, £15 over 20 miles, £20 over 30 miles
  -cost<=10 miles => free
  -10<mileage<=15 => 10£
  -15<mileage<=20 => 15£
  -20<mileage<=30 => 20£ */
  //We need mileages to be bigger then 0 (this will also give us the 0 as low limit in all coditions and with that we can have only one condition in the other else if)
  //If the mileage is smaller of equal to 10 miles and the value of the goods is over £100 the delivery fee will be free
  if((mileage>=0 && mileage<=10) && cost>100){
    printf("You paid: £%.2lf.\n", cost);
    printf("You are %d miles away.\n", mileage);
    printf("The delivery fee is: free.\n");
    printf("The total cost is: £%.2lf.\n", cost);
  }
    if((mileage>=0 && mileage<=10) && cost<=100){
    printf("You paid: £%.2lf.\n", cost);
    printf("You are %d miles away.\n", mileage);
    printf("The delivery fee is: £5.\n");
    //We need to add the delivery fee to the cost of the package giving us the total cost for the client
    cost+=5;
    printf("The total cost is: £%.2lf.\n", cost);
  }
  //If the mileage is bigger than 10 and smaller or equal to 15 miles the delivery fee will be £10
  else if(mileage<=20){
    printf("You paid: £%.2lf.\n", cost);
    printf("You are %d miles away.\n", mileage);
    printf("The delivery fee is: £10.\n");
    cost+=10;
    printf("The total cost is: £%.2lf.\n", cost);
  }
  //If the mileage is bigger than 15 and smaller or equal to 20 miles the delivery fee will be £15
  else if(mileage<=30){
    printf("You paid: £%.2lf.\n", cost);
    printf("You are %d miles away.\n", mileage);
    printf("The delivery fee is: £15.\n");
    cost+=15;
    printf("The total cost is: £%.2lf.\n", cost);
  }
  //If the mileage is bigger than 20 miles the delivery fee will be £20
  else{
  double fee = 15 + (mileage-30) * 0.5;
    printf("You paid: £%.2lf.\n", cost);
    printf("You are %d miles away.\n", mileage);
    printf("The delivery fee is: £%.2lf.\n", fee);
    cost+=fee;
    printf("The total cost is: £%.2lf.\n", cost);
  }
  return 0;
}