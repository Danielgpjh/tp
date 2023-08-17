#include <stdio.h>

void perimetro(int num1,int num2,int Peri){
	
	printf("el perimetro es %d \n ",Peri);
	
}


void area(int num1,int num2,int Are){
	
	printf("el area es %d \n ",Are);
}


int main() {
	int num1=0,num2=0;
	int Peri,Are;
	
	printf("ingrese un numero ");
	scanf("%d",&num1);
	printf("ingrese otro numero ");
	scanf("%d",&num2);
	
	Peri = 2*num1+2*num2;	
	
	Are = num1*num2;	
	
	perimetro(num1,num2,Peri);
	area(num1,num2,Are);
	
	
	
	return 0;
}

