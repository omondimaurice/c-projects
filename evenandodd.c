#include<stdio.h>
#include<math.h>

int V1,results;

int main(){
	
	
printf("Enter V1:\n");
scanf("%d",&V1);

results=V1%2;
if(results==0){
	
	printf("variable %d is even",V1);
}
else{
	
		printf("variable %d is odd",V1);

}
	
	return 0;
	
}

