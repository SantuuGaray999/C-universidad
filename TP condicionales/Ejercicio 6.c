//Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir cuál de estos valores es mayor al promedio
#include <stdio.h>
int main (){
	int num1, num2, num3, suma, promedio;
	
	printf("ingresar valor: ");
	scanf("%d", &num1);
	printf("ingresar valor: ");
	scanf("%d", &num2);
	printf("ingresar valor: ");
	scanf("%d", &num3);
	
	suma = num1 + num2 + num3;
	promedio = suma / 3;
	printf ("\nla suma es: %d", suma);
	
	printf ("\nel promedio es: %d\n", promedio);
	
	if (num1> promedio) {
		printf("el numero %d es mayor al promedio", num1);
	}
	else if (num2 > promedio){
		printf("el numero %d es mayor al promedio", num2);
	}
	else {
		printf("el numero %d es mayor al promedio", num3);
	}
}
