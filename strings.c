//Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir cuántos montos superan los $ 40 y del total cobrado que porcentaje representa la suma de los que superan los $40
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char patente[9];
  int monto, montosuperado=0, i, totacumulado ;
  for (i=0; i < 4; i++){
    printf ("ingrese patente: ");
    scanf ("%s", &patente[i]);
    printf ("ingrese monto de la multa: ");
    scanf ("%i", &monto);
    totacumulado += monto;
    
    if (monto > 40){
      montosuperado++;
    }
  }
  
  printf ("\nel total cobrado es: %i", totacumulado);
  printf ("\nel porcentaje de montos superados es: %i", (montosuperado*100)/4);


  
  return 0;
}
