//Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad 
#include <stdio.h>

int main (){
	int edad_juan,  edad_pablo;
	float altura_juan, altura_pablo;
	
	printf("ingresa la altura de juan: ");
	scanf("%f", &altura_juan);
	
	printf("ingresa la edad de juan: ");
	scanf ("%d", &edad_juan);
	
	printf("ingresa la altura de pablo: ");
	scanf("%f", &altura_pablo);
	
	printf("ingresa la edad de pablo: ");
	scanf ("%d", &edad_pablo);
	
	if(edad_juan > edad_pablo){
		printf("la estatura de juan es %.2f", altura_juan);
	}
	if(edad_pablo > edad_juan){
		printf("la estatura de pablo es %.2f", altura_pablo);
	}
}
