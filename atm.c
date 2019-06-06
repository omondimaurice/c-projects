#include<stdio.h>


//balance declared and initialized 
float balance=5000;

//deposit declaration
int deposit;

//withdraw declaration
int withdraw;

//random PIN declared and initiliazed
int InitPIN=1234;

//user pin 
int PIN;
//option int switch case

int option;

//choice int for while loop
int choice;

int main(){
	
	
	//deposit function declared
	float Deposit();
	
	
	//checkbalance function declared
	void CheckBalance();
	
	
	//withdrwa function declared
	void Withdraw();
	
	
	//promp user to initiate transaction process
	printf("Enter 1 to initiate or 5 to stop\n");
	
	
	//user response captured
	scanf("%d",&choice);
	
	
	//transacion will be executed as long as user response is not equal to 5
	while( choice!=5){


//user prompted to choose transaction category 
	printf("Choose service\n 1. Deposit \n 2. Check balnce \n 3. Withdraw \n 4. Exit \n");
	
	
	//response captured
	scanf("%d", &option);
	
	//eavluates response
	switch(option){
		
		//if 1 is selected , deposit function is called
		case 1:
			 Deposit();
			break;
			
			//if 2 is selected , CheckBalance function is called
		case 2:
			 CheckBalance();
			break;
			
			//if 3 is selected , withdraw function is called
		case 3:
			 Withdraw();
			break;
			
			//else program control taken out of the switch
		default:
			printf(" Thank you !\n");
			break;	
	}
	break;
		}
		
return 0;	
	
}
	
	
	// depsit function , returns amount deposited if PIN is correct 
float Deposit(deposit){
	//prompt user for pin
	printf("Enter your pin to deposit: \n");
	
	//reads users PIN
	scanf("%d",&PIN);
	
	//checks correct PIN
	if(PIN==InitPIN){
		
		printf("Enter deposit amount: \n");
		scanf("%d",&deposit);
		balance=balance+deposit;
			printf(" you have deposited %d, your current balance ksh %.2f.",deposit,balance);
	}
	else{
		
		
		
			//reurns this message if user enters wrong pin
		printf(" you have entered wrong PIN!");
	}
	
	return balance ;	
}	

// CheckBalance function , returns message containing balance deposited if PIN is correct
void CheckBalance(){
	
//prompt user for pin	
printf("Enter your pin to check balance: \n");

//reads users PIN
	scanf("%d",&PIN);
	
	//checks correct PIN
	if(PIN==InitPIN){
		
		
	balance=balance+deposit;
	
	//prints user balance
			printf(" your current balance is ksh %.2f",balance);
	}
	else{
		
			//prints this message if user enters wrong pin
		printf(" you have entered wrong PIN!");
	}
	
	
return;	
}

	// Withdraw function , returns amount deposited if PIN is correct
void Withdraw(){
	
	//prompt user for pin
	printf("Enter your pin to withdraw: \n");
	
	
	//reads users PIN 
	scanf("%d",&PIN);
	
	//checks correct PIN
	if(PIN==InitPIN){
		
		
		//prompt user for withdrawal amuont
		printf("Enter amount to withdraw: \n");
		
		
		//reads withdrawal ammount
		scanf("%d",&withdraw);
		
		
		
		//checks if the withdrawal amount is greater than balance
		if(balance>=withdraw){
			
			
			//gets new balance after withdrawal
			balance=balance-withdraw;
			
			
			//	//reurns this after successful withdrawal
			printf("You have successfully withdrawn %d , your balance is %.2f",withdraw,balance);
			
		}
		
		else{
			
			//prints this message  if balance is insufficient.
			printf("You have insufficient balance!");
		}
		
	}
	else{
	
	
	
		//print this message if user enters wrong pin
		printf(" you have entered wrong PIN!");
	}
	
	
	return;
}

