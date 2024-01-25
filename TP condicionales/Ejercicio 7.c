//Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cuál de
//estas sumas es mayor
#include <stdio.h>

int main (){
	int num1, num2, num3, num4, grupo1, grupo2;
	
	printf("ingresar numero: ");
	scanf("%d", &num1);
	printf("ingresar numero: ");
	scanf("%d", &num2);
	printf("ingresar numero: ");
	scanf("%d", &num3);
	printf("ingresar numero: ");
	scanf("%d", &num4);
	
	grupo1= num1 + num2;
	grupo2= num3 + num4;
	
	if (grupo1>grupo2){
		printf("la suma entre el primer y el segundo valor es mayor");
	}
	else if (grupo2>grupo1){
		printf("la suma entre el tercer y el cuarto valor es mayor");
	}
	else{
		printf ("sumas invalidas");
	}
	
	
}
