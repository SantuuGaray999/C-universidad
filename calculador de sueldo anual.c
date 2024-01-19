#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//practica de ciclos exactos
int main (){
  char leg[20];
  int i, ch, mes;
  int vh=3000;
  float sueldo_mes;
  float sueldo_anual;
  //valor de la hora
  printf("valor de la hora %i\n\n", vh);

  for(i=0; i<50; i++) {
    //nombre del empleado.
    printf("\nLEGAJO DEL EMPLEADO:");
    fflush(stdin);
    gets(leg);
    //texto de ingreso de datos.
    printf("\n\nINGRESAR INFORMACION ANUAL DEL EMPLEADO %s SEGUN EL MES:",leg);
    printf("\n-----------------------------------------------------------");
    

    for (mes = 1; mes < 13; mes++) { 
      printf("\n\t\tMES %i\n\n",mes);

    

    //cantidad de horas trabajadas en el mes
    printf("\ncantidad de horas trabajadas en el mes:");
    scanf("%i",&ch);

    //sueldo del mes
    sueldo_mes = ch * vh;
    printf("\n\nsueldo mensual del empleado: %.2f", sueldo_mes);
    

    sueldo_anual  = sueldo_mes * 12;
  
    
    
    
    printf("\n\n-----------------------------------------------------------\n\n");
    
    } 
    printf(" el sueldo anual de %s es %.2f\n",leg, sueldo_anual);

    printf("****************************************");
    
  }
  
}
