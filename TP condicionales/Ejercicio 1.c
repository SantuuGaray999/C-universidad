//Ingresar dos valores, indicar e imprimir si son iguales 
#include <stdio.h>

int main (){
	int num1, num2;
	
	printf("\ningresar numero 1: ");
	scanf("%d", &num1);
	
	printf ("\ningresar numero 2: ");
	scanf("%d", &num2);
	
	if (num1 == num2){
		printf("\nlos numeros son iguales");
	}
	
	return 0;
}
