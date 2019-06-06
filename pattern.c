#include <stdio.h>
#define RATE 102.31
int main(){
float sales;
float commission;
float commission_rate;
float base;


printf("Enter sales: ");
scanf("%f",&sales);

if(sales<=2500){
	
	commission_rate=(0.17/100)*sales;
	base=30;
	
	commission=base+commission_rate;
	printf("The total commission for your todays sales is : %.2f",commission);
	
}
else if(sales>2500 && sales<=6250){
	commission_rate=(0.66/100)*sales;
	base=56;
	
	commission=base+commission_rate;
	printf("The total commission for your todays sales is : %.2f",commission);
}
else if(sales>6250 && sales<=20000){
	commission_rate=(0.34/100)*sales;
	base=76;
	
	commission=base+commission_rate;
	printf("The total commission for your todays sales is : %.2f",commission);
}
else if(sales>2500 && sales<=6250){
	commission_rate=(0.66/100)*sales;
	base=56;
	
	commission=base+commission_rate;
	printf("The total commission for your todays sales is : %.2f",commission);
}
else if(sales>20000&& sales<=50000){
	commission_rate=(0.22/100)*sales;
	base=100;
	
	commission=base+commission_rate;
	printf("The total commission for your todays sales is : %.2f",commission);
}
else if(sales>50000 && sales<=500000){
	commission_rate=(0.11/100)*sales;
	base=155;
	
	commission=base+commission_rate;
	printf("The total commission for your todays sales is : %.2f",commission);
}
else
{
	commission_rate=(0.09/100)*sales;
	base=255;
	
	commission=base+commission_rate;
	printf("The total commission for your todays sales is : %.2f",commission);
}













	return 0;
}
