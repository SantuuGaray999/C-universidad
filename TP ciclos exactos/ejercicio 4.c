//ingresar 8 valores por teclado, y a partir de esto sacar el promedio general, sacar el promedio de lo valores pares y el promedio de los valores impares. Luego mostrar por pantalla cuantos números superaron el valor 15.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int numero[8], ppares=0, pimpares=0, sumatotp=0, sumatoti=0;
  int quince=0;
  int i;

  
  for ( i = 0; i < 8; i++){

    printf ("agregar valor: ");
    scanf  ("%d", &numero[i]);

    if (numero[i] % 2 == 0){
      //cuando ya se sabe que el numero del vector es par, la suma de los valores         pares se van acumulando y sumando en la variable suma total de pares.
      sumatotp += numero[i];
      //le agrego un ++ a ppares para que al final cuente cuantos numeros pares hay       y pueda hacer el promedio con la cantidad exacta de pares y la sumade pares
      ppares++;
      
    }
    else {
      sumatoti += numero[i];
      pimpares++;
    }
    
    if (numero[i] > 15){
    	quince++;
	}
    
  }
  int sumatotal= sumatotp + sumatoti;
  printf("promedio general: %d", sumatotal / 5);
  printf("\npromedio de pares: %d", sumatotp/ppares);
  printf("\npromedio de impares: %d", sumatoti/pimpares);
  printf("\nnumeros que sueraron 15: %d", quince);
  
  return 0;
}
