/*Ingresar dos valores y realizar e imprimir el producto si el 1ro es mayor al 2do, si son
iguales solo indicarlo*/
#include <stdio.h>

int main (){
	int num1, num2;
	
	printf ("ingresar valor 1: ");
	scanf("%d", &num1);
	printf ("\ningresar valor 2: ");
	scanf("%d", &num2);
	
	if (num1 > num2){
		printf("el primer valor es mayor");
	}
	
	
	if (num1 == num2){
		printf ("los valores son iguales");
	}
}
