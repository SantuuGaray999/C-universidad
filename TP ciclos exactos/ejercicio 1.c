//ingresar 25 números, calcular su promedio e imprimirlo
#include <stdio.h>

int main (){
  int i, num, suma=0, promedio;

  for(i=1; i<26; i++){
    printf ("\n%i.ingresar valor: ",i);
    scanf("%i", &num);

    suma += num;
    promedio = suma/i;
    
  }
  printf("\n\tpromedio: %i",promedio);
}
