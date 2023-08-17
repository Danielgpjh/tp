#include <stdio.h>

void numeros(int a,int b){
	
	printf("el valor de a es %d \n ",a);
	printf("el valor de b es %d \n ",b);
	
}

int main() {
	
	int a=0,b=0;
	
	printf("ingrese dos numeros ");
	scanf("%d",&a);
	scanf("%d",&b);
	
	numeros(a,b);
	
	return 0;
}
