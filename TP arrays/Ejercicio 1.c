#include <stdio.h>

//Cree un vector de 10 posiciones, pida al usuario que ingrese los 10 valores y luego muéstrelo de manera inversa. 
int main() {
	int i, num[10]; 
	
  for (i=0; i < 10; i++){
  	printf("ingresar numero: ");
  	scanf("%d",&num[i]);
  }
  //repito el ciclo inverso segun la cantidad de elementos del array
  for(i=9; i >= 0; i--){
  	printf("\n %d",  num[i]);
  }
  
  
  return 0;
}
