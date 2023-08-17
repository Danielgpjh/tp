#include <stdio.h>

void suma(int a,int b){
	
	int sum=0;
	sum=a+b;
	
	printf("el valor de la suma es %d \n ",sum);
	
}

void mayor(int a,int b){
	
	if(a == b)
		printf("son iguales \n \n ");
	
	else {
		
		if(a>b)
			printf("es mayor %d ",a);
		
		else
			printf("es mayor %d ",b);
		
	}
	
}

int main(){
	int a=0,b=0;
	
	printf("ingrese el valor de a ");
	scanf("%d",&a);
	
	printf("ingrese el valor de b ");
	scanf("%d",&b);
	
	suma(a,b);
	mayor(a,b);
	
	
	return 0;
}
