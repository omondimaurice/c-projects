


#include <stdio.h>



int main(){
	
	
	
	
	/**
	c use scanf() to read data
	and printf() to write data
	as shown below
	
	we can also use getchar() to read character 
	**/
	
	int a,b,c;
	printf("please enter the value of a\n");
	scanf("%d", &a);
	printf("please enter the value of b\n");
	
	scanf("%d",&b);
	c= a+b;
	printf("The sum of a and b is : %d\n",c);
	
	printf("Enter character h to see hello\n");
	char h;
	h=getchar();
	printf("hello Wolrd");
	

		
return 0;
}
