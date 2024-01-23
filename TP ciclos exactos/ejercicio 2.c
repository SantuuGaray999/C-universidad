//Ingresar 20 notas y nombres de alumnos, indicar e imprimir los aplazados ( menos de 4) y el nombre a quien pertenece esa nota
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
  char alumno[20];
  int i, nota;

  for (i=0; i<19; i++) {
    printf("ingresa el nombre del alumno: ");
    scanf("%s", alumno);
    printf("ingresa la nota del alumno: ");
    scanf("%d", &nota);
    if (nota < 4){
      printf("el alumno %s ha desaprobado con una nota de %d\n", &alumno,nota);
    }
  }
  return 0;
}
