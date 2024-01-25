/*. Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo sabiendo
que los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80. */
#include <stdio.h>
#include <string.h>
int main (){
	int sueldo= 0, cat, ht;
	char empleado[20];
	
	printf("ingresar nombre del empleado:");
	fflush(stdin);
	gets (empleado);
	printf("ingresar las horas trabajadas de %s: ", empleado);
	scanf("%d", &ht);
	printf("ingresar su categoria: ");
	scanf("%d", &cat);
	
	if (cat == 1){
		sueldo = ht * 50;
		printf("sueldo: %d", sueldo);
	}
	if (cat == 2){
		sueldo = ht * 70;
		printf("sueldo: %d", sueldo);
	}
	if (cat == 3){
		sueldo = ht * 80;
		printf("sueldo: %d", sueldo);
	}
	
	
}
