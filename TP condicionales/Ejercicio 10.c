/*Ingresar el sueldo, categor�a y antig�edad de un empleado, calcular el sueldo final, si el
empleado es de la categor�a 1 se le adicionara $50 por cada a�o de antig�edad.*/
#include <stdio.h>
#include <string.h>
int main (){
	int sueldo= 0, antiguedad, cat;
	char empleado[20];
	
	printf("ingresar nombre del empleado:");
	fflush(stdin);
	gets (empleado);
	printf("ingresar el tiempo de antiguedad de %s: ", empleado);
	scanf("%d", &antiguedad);
	printf("ingresar su categoria: ");
	scanf("%d", &cat);
	
	if (cat == 1){
		sueldo = antiguedad * 50;
		printf("sueldo: %d", sueldo);
	}
	
	
}
