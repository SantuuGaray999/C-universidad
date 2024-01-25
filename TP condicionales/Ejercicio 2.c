//Ingresar un valor indicar e imprimir si es positivo, negativo o cero
#include <stdio.h>

int main (){
	int num;
	
	printf ("ingresa el valor: ");
	scanf ("%d", &num);
	
	if (num > 0){
		printf ("el numero %d es positivo", num);
	}
	else if (num == 0){
		printf ("el numero es cero", num);
	}
	else {	
		printf ("el numero %d es negativo", num);
	
	}
	
}
