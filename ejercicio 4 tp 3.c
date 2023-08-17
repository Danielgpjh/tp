#include <stdio.h>

int presion(float num1,float num2,float total)//Para que se pasan como argumentos numq y num2???
{
	
	printf("La presion es %f \n ",total);                                                                          
	
}

int main() {
	
	float num1=0,num2=0;
	float total;
	
	printf("ingrese la fuerza ");
	scanf("%f",&num1);
	
	printf("ingrese el area ");
	scanf("%f",&num2);
	
	total=num1/num2;
	
	presion(num1,num2,total);
	
	return 0;
}

