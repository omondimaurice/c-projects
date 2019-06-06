//vehicle management system
 #include<stdio.h>

 struct Vehicles{
char registrationNumber[10];
char make[20];
char model[20];
 int mileage;
 char driver_name[20];
 int driver_age;
 int driver_id;
 char status[4];// 1 for on and 0 for off
// time departure_time;
int fuel_capacity;
int load_capacity;
char destination[20];
 	
 } v1,v2,v4,v3,v5,v6;
 
 int main(){
 	printf("Register vehicle with business name as either v1,v2,v3,v4,v5 or v6 \n ");
 	
 	 char choise[2];                    
 	 gets(choise);
	 if(choise=="v1"){
	 	
		printf("Enter registration number of your vehicle:\n");
		gets(v1.registrationNumber);
		
		
		printf("Enter make  of your vehicle:\n");
		gets(v1.make);
		
		
		printf("Enter model of your vehicle:\n");
		gets(v1.model);
			
		
		printf("Enter mileage of your vehicle:\n");
		scanf("%d",&v1.mileage);
		
		
		printf("Enter name of  vehicle driver:\n");
		gets(v1.driver_name);
		
		
		printf("Enter age of  vehicle driver:\n");
		scanf("%d",&v1.driver_age);
		
		
		printf("Enter id number vehicle driver:\n");
		scanf("%d",&v1.driver_id);
		
		printf("Enter status of ,On or Off:\n");
		gets(v1.status);
		
		printf("Enter fuel capacity of the vehicle:\n");
		scanf("%d",&v1.fuel_capacity);
		
		
		
		printf("Enter  load capacity of the vehicle:\n");
		scanf("%d",&v1.load_capacity);
		
		
		printf("Enter fuel capacity of the vehicle:\n");
		gets(v1.destination);
		printf("Vehicle registered successfully");
	}
	
	else if(choise=="v2"){
		
		printf("Enter your vehicle registration number :\n");
		gets(v2.registrationNumber);
		
		
		printf("Enter make  of your vehicle:\n");
		gets(v2.make);
		
		
		printf("Enter model of your vehicle:\n");
		gets(v2.model);
			
		
		printf("Enter mileage of your vehicle:\n");
		scanf("%d",&v2.mileage);
		
		
		printf("Enter name of  vehicle driver:\n");
		gets(v2.driver_name);
		
		
		printf("Enter age of  vehicle driver:\n");
		scanf("%d",&v2.driver_age);
		
		
		printf("Enter id number vehicle driver:\n");
		scanf("%d",&v2.driver_id);
		
		printf("Enter status of ,On or Off:\n");
		gets(v2.status);
		
		
		printf("Enter fuel capacity of the vehicle:\n");
		scanf("%d",&v2.fuel_capacity);
		
		
		
		printf("Enter  load capacity of the vehicle:\n");
		scanf("%d",&v2.load_capacity);
		
		
		printf("Enter fuel capacity of the vehicle:\n");
		gets(v2.destination);
		
		printf("Vehicle registered successfully");
	}
	
	else if(choise=="v3"){
		
		printf("Enter your vehicle registration number:\n");
		gets(v3.registrationNumber);
		
		
		printf("Enter make  of your vehicle:\n");
		gets(v3.make);
		
		
		printf("Enter model of your vehicle:\n");
		gets(v3.model);
			
		
		printf("Enter mileage of your vehicle:\n");
		scanf("%d",&v3.mileage);
		
		
		printf("Enter name of  vehicle driver:\n");
		gets(v3.driver_name);
		
		
		printf("Enter age of  vehicle driver:\n");
		scanf("%d",&v3.driver_age);
		
		
		printf("Enter id number vehicle driver:\n");
		scanf("%d",&v3.driver_id);
		
		printf("Enter status of ,On or Off:\n");
		gets(v3.status);
		
		printf("Enter fuel capacity of the vehicle:\n");
		scanf("%d",&v3.fuel_capacity);
		
		
		
		printf("Enter  load capacity of the vehicle:\n");
		scanf("%d",&v3.load_capacity);
		
		
		printf("Enter fuel capacity of the vehicle:\n");
		gets(v3.destination);
		
		printf("Vehicle registered successfully");
	}
	else if(choise=="v4"){
		printf("Enter your vehicle registration number:\n");
		gets(v4.registrationNumber);
		
		
		printf("Enter make  of your vehicle:\n");
		gets(v4.make);
		
		
		printf("Enter model of your vehicle:\n");
		gets(v4.model);
			
		
		printf("Enter mileage of your vehicle:\n");
		scanf("%d",&v4.mileage);
		
		
		printf("Enter name of  vehicle driver:\n");
		gets(v4.driver_name);
		
		
		printf("Enter age of  vehicle driver:\n");
		scanf("%d",&v4.driver_age);
		
		
		printf("Enter id number vehicle driver:\n");
		scanf("%d",&v4.driver_id);
		
		printf("Enter status of ,On or Off:\n");
		gets(v4.status);
		
		
		printf("Enter load capacity of the vehiclce:\n");
		scanf("%d",&v4.load_capacity);
		
		
		printf("Enter fuel capacity of the vehicle:\n");
		scanf("%d",&v4.fuel_capacity);
		
		
		
		printf("Enter  load capacity of the vehicle:\n");
		scanf("%d",&v4.load_capacity);
		
		
		printf("Enter fuel capacity of the vehicle:\n");
		gets(v4.destination);
		
		printf("Vehicle registered successfully");
		
		
	}
	else if(choise=="v5"){
	printf("Enter your vehicles registration number:\n");
	gets(v5.registrationNumber);
		
		
		printf("Enter make  of your vehicle:\n");
		gets(v5.make);
		
		
		printf("Enter model of your vehicle:\n");
		gets(v5.model);
			
		
		printf("Enter mileage of your vehicle:\n");
		scanf("%d",&v5.mileage);
		
		
		printf("Enter name of  vehicle driver:\n");
		gets(v5.driver_name);
		
		
		printf("Enter age of  vehicle driver:\n");
		scanf("%d",&v5.driver_age);
		
		
		printf("Enter id number vehicle driver:\n");
		scanf("%d",&v5.driver_id);
		
		printf("Enter status of ,On or Off:\n");
		gets(v5.status);
		
		
		printf("Enter fuel capacity of the vehicle:\n");
		scanf("%d",&v5.fuel_capacity);
		
		
		
		printf("Enter  load capacity of the vehicle:\n");
		scanf("%d",&v5.load_capacity);
		
		
		printf("Enter fuel capacity of the vehicle:\n");
		gets(v5.destination);
		printf("Vehicle registered successfully");
	}
	else{
		printf("Enter your vehicles registration number");
	gets(v6.registrationNumber);
		
		
		printf("Enter make  of your vehicle:\n");
		gets(v6.make);
		
		
		printf("Enter model of your vehicle:\n");
		gets(v6.model);
			
		
		printf("Enter mileage of your vehicle:\n");
		scanf("%d",&v6.mileage);
		
		
		printf("Enter name of  vehicle driver:\n");
		gets(v6.driver_name);
		
		
		printf("Enter age of  vehicle driver:\n");
		scanf("%d",&v6.driver_age);
		
		
		printf("Enter id number vehicle driver:\n");
		scanf("%d",&v6.driver_id);
		
		printf("Enter status of ,On or Off:\n");
		gets(v6.status);
		
		
		printf("Enter fuel capacity of the vehicle:\n");
		scanf("%d",&v6.fuel_capacity);
		
		
		
		printf("Enter  load capacity of the vehicle:\n");
		scanf("%d",&v6.load_capacity);
		
		
		printf("Enter fuel capacity of the vehicle:\n");
		gets(v6.destination);
		
		printf("Vehicle registered successfully");
	}
 	
 	
 	
 	
 	return 0;
 }
 
