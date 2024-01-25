//Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor
#include <stdio.h>

int main (){
	int num1, num2, resta;
	
	printf ("ingresar valor 1: ");
	scanf("%d", &num1);
	printf ("\ningresar valor 2: ");
	scanf("%d", &num2);
	
	if(num1> num2){
		resta= num1 - num2;
		printf("el valor de la resta es: %d", resta);
	}
	if(num2> num1){
		resta= num2 - num1;
		printf("el valor de la resta es: %d", resta);
	}
}
