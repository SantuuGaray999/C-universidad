//Ingresar 30 valores.Contar cuantos están entre 1 y 10, cuantos entre 10 y 20, cuantos entre 20 y 30 y cuantos son mas de 30. Luego mostrar el porcentaje de cada grupo en el total. 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {

  unsigned numero[30], f1=0,f2=0, f3=0, mayor30=0;
  int i;
  for (i =0; i < 30; i++){
    printf("ingresar numero: ");
    scanf("%d", &numero[i]);

    if (numero[i] > 0 & numero[i] < 10){
      f1++;
    }
    if (numero[i] > 10 & numero[i] < 20){
      f2++;
    }
    if (numero[i] > 20 & numero[i] < 30){
      f3++;
    }
    if ( numero[i]>30){
      mayor30++;
    }
  }
  unsigned porcentajetotal1 = (f1*100)/30;
  unsigned porcentajetotal2 = (f2*100)/30;
  unsigned porcentajetotal3 = (f3*100)/30;
  unsigned porcentajetotalmayor = (mayor30*100)/10;
  printf("\ncantidad de numeros de entre 1 y 10: %u", f1);
  printf("\ncantidad de numeros de entre 11 y 20: %u", f2);
  printf("\ncantidad de numeros de entre 21 y 30: %u", f3);
  printf("\ncantidad de numeros mayores a 30: %u", mayor30);

  printf("\n\nPorcentaje de grupo 1: %u %",porcentajetotal1);
  printf("\n\nPorcentaje de grupo 2: %u %",porcentajetotal2);
  printf("\n\nPorcentaje de grupo 3: %u %",porcentajetotal3);
  printf("\n\nPorcentaje de grupo mayor: %u %",porcentajetotalmayor);
  return 0;
}

