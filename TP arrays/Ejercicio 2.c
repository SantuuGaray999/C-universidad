//Cree una matriz de enteros de 3 x 3. Inicialícela en base a la siguiente tabla:
//1 0 0
//0 1 0
//0 0 1
#include <stdio.h>

int main() {
    int di1, di2 , matriz[3][3] = {{1,0,0},{0,1,0},{0,0,1}};

    for(di1=0; di1<3; di1++){
    	for(di2=0; di2<3; di2++){
    		printf("%d ",matriz[di1][di2]);
		}
		printf("\n");
    	
	}
   
    return 0;
}
