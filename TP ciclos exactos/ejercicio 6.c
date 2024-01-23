//Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir cuántos montos superan los $ 40 y del total cobrado que porcentaje representa la suma de los que superan los $40
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char patente[9];
  int i; 
  float monto, montosuperado=0, totacumulado=0, cantidad_superada=0, porcentaje;
  for (i=0; i < 50; i++){
    printf ("ingrese patente: ");
    scanf ("%s", &patente[i]);
    printf ("ingrese monto de la multa: ");
    scanf ("%f", &monto);
    
    totacumulado += monto;
    
    if (monto > 40){
      
      montosuperado += monto;
      cantidad_superada++;
      
    }
  }
  porcentaje = cantidad_superada / i * 100;
  printf ("\nel total cobrado es: %.2f", totacumulado);
  printf ("\nel porcentaje de monto superado es: %.2f", porcentaje);


  
  return 0;
}
