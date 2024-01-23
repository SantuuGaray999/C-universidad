//Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos negativos y cuántos ceros
#include <stdio.h>
int main (){
  int i, num, positivo=0, negativo=0, cero=0;

  for (i=1; i<=10; i++){
    printf("ingresa un numero: ");
    scanf("%d", &num);

    if (num>0){
      positivo++;
    }
    else if (num == 0){
      cero++;
    }
    else {
      negativo++;
    }
    
  }
  printf ("\n
  positivos: %d\n", positivo);
  printf ("ceros: %d\n", cero);
  printf ("negativos: %d\n", negativo);
  
  
}
