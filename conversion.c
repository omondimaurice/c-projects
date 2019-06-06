#include<stdio.h>



float temp_c;
float temp_f;
float conversion;
int response;
float c_constant=1.8;// 1c= 1.8 fahrenheit
float f_constant=0.555;// 1f= 0.555 degrees celsius
  
int main(){
	
printf("Choose conversion.\n 1. Convert to celcius.\n 2. Convert to fahrenheit\n");
scanf("%f",&response);
//convert temperature to fahrenheit
if(response==1){
	printf("Enter fahrenheit to convert:\n");
	scanf("%f",&temp_f);
	conversion=temp_f/f_constant;
	printf(" temperature in celcius is %.2f",conversion);
}
//convert temperature to celcius degrees

else{
	
	printf("Enter celcius to convert:\n");
	scanf("%f",&temp_c);
	conversion=temp_c*c_constant;
	printf(" temperature in fahrenheit is %.2f",conversion);
	
}


} 
