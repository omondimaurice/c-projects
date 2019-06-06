#include<stdio.h>



char Vt[5]="tail";
char Vh[5]="head";

int toss,num2;

int main(){
printf("Enter any as your toss.\n");
scanf("%d",&toss);
num2=toss%2;
if(num2==0){
	
	printf("You have got a  %s",Vh);
	
}
else
{
	
	printf("You have got a  %s",Vt);
	
}	
	
	
	
	
}
