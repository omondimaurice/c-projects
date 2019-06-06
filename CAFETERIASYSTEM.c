#include <stdio.h>

void products(int x, int a);

int main(void) {
  int price;
  int q,product;

  printf("Welcome to Ernest Hotel. \n");
  //selection  menu 
  printf("Select your favorite meal: \n 1: Sprite 2L - 200 KSH, \n 2: Coca Cola 300ml - 30 KSH, \n 3: Minute Maid 250ml - 50 KSH, \n 4: White Wine 500ml - 650 KSH, \n 5: Chilli Fries - 90 KSH, \n 6: Chicken nuggets - 350 KSH, \n ");
  printf("Enter product: \n");
  scanf("%d", &product);
  printf("Enter quantity: \n");
  scanf("%d", &q);

//ifs executed according to users favourite meal choice and quantity.
  if (q < 1) {
    printf("Insufficient quantity. \n");
    printf("Please select more than 1 item. \n");
    printf("Enter quantity: \n");
    scanf("%d", &q);
  }

  if(product == 1){
      int amount = 200;
      products(q,amount);
  }else if(product == 2) {
      int amount = 30;
      products(q,amount);
  }else if(product == 3) {
    int amount = 50;
    products(q,amount);
  }else if(product == 4) {
    int amount = 650;
    products(q,amount);
  }else if(product == 5) {
    int amount = 90;
    products(q,amount);
  }else if(product == 6) {
    int amount = 350;
    products(q,amount);
  }

  return 0;
}

//method to calculate cost,balance,discount on meals bought using swicth with if statements.
void products(quantity,amount) {
  int price;
  switch(quantity) {
      case 1:
      printf("Total cost is:%d \n",(amount* quantity));
      printf("Kindly enter the amount: \n");
      scanf("%d", &price);
      
      if(price < (amount* quantity)) {
        printf("Insuficient Funds");
      } else if(price > (amount* quantity)) {
        int balance = price - (amount* quantity);
        printf("Your balance is %d: ", balance);
      }

      break;

      case 2:
      printf("Total cost is:%d \n",(amount* quantity));
      printf("Kindly enter the amount: \n");
      scanf("%d", &price);
      
      if(price < (amount* quantity)) {
        printf("Insuficient Funds");

      } else if(price > (amount* quantity)) {
        int balance = price - (amount* quantity);
        printf("Your balance is %d: ", balance);
      }

      break;

      case 3:
      printf("Total cost is:%d \n",(amount* quantity));
      float discount = ((amount* quantity)*0.9);
      printf("Total discounted price is :%.2f \n",discount);
      printf("Kindly enter the amount: \n");
      scanf("%d", &price);
      
      if(price < (amount* quantity)) {
        printf("Insuficient Funds");

      } else if(price > (amount* quantity)) {
        float balance = price - discount;
        printf("Your balance is %.2f: ", balance);
      }

      break;

      case 4:
      printf("Total cost is:%d \n",(amount* quantity));
      discount = ((amount* quantity)*0.8);
      printf("Total discounted price is :%.2f \n", discount);
      printf("Kindly enter the amount: \n");
      scanf("%d", &price);
      
      if(price < (amount* quantity)) {
        printf("Insuficient Funds");

      } else if(price > (amount* quantity)) {
        float balance = price - discount;
        printf("Your balance is %.2f: ", balance);
      }

      break;
      default:
      printf("Maximum quantity to purchase is 4. \n");
  }
}
