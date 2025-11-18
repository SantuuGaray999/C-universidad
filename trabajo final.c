
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void altas(); //Funcion dar de alta a los trabajadores
void clave(); //Funcion buscar trabajadores por clave
void bus_nombre(); //Funcion buscar trabajadores por nombre
void ord_nombre(); //Funcion consultar a todos los trabajadores ordenados alfabéticamente
char nombre[3][20],numero[3][6],sueldo[3][6],hor[3][6]; 
int y=1; //Bandera indicadora de que no han ingresado trabajador (cuando está en 1)

int main(){
	char opcion; //Variable que guardara la opción seleccionada
	
	do{
		system("cls"); 
		printf("\n----------------------------\nBienvenido usuario\n\n");
		printf("A - Altas: Agregar a trabajadores\n");
		printf("B - Consultas generales\n");
		printf("C - Consultas por claves\n");
		printf("D - Consultas por nombres\n");
		printf("E - Salir\n\n");
		printf("Selecciona una opcion: ");
		scanf("%s",&opcion); 
	
		
		switch(opcion){ 
			case 'A':
			case 'a':
				altas();
			break;
		
			case 'b':
			case 'B':
				ord_nombre();
			break;
		
			case 'c':
			case 'C':
				clave();
			break;
		
			case 'd':
			case 'D':
				bus_nombre();
			break;
		
			case 'e':
			case 'E': 
				printf("Saliendo del programa \n");			
			break;
		
			default: 
				printf("Opcion no valida");
			break;
		}	
	}while(opcion!='e' && opcion!='E'); 
	
	
	getchar();
	return 0;
}

void altas(){ 
	int x; 
	system("cls"); 
	
	if(y==1){ 
		for(x=0;x<3;x++){ 
			while(getchar()!='\n');
			printf("Ingrese el nombre del trabajador: ");
			gets(nombre[x]); 	
			printf("Ingrese el numero del trabajador: ");
			scanf("%s",&numero[x]);		
			printf("Ingrese el sueldo del trabajador: ");
			scanf("%s",&sueldo[x]);			
			printf("Ingrese las horas trabajadas: ");
			scanf("%s",&hor[x]);
			system("cls"); 
		}
		y=2; 
	}
	else{ 
		printf("Ya diste de alta a tus trabajadores\n");
		system("PAUSE");		
	}
}

void clave(){ 
	int p,pos=-1; 
	char buscar[6]; 
	
	system("cls"); 
	if(y==1) //Si no ha dado de alta usuarios
		printf("Primero debes dar de alta a algunos usuarios\n");
	
	else{ //Si ya dio de alta usuarios
		printf("Cual es el numero del trabajador que buscas: ");
		while(getchar()!='\n');//Limpio buffer de entrada	
		gets(buscar); //Guardamo numero a buscar
		
		for(p=0;p<3;p++){ //Buscamos con el ciclo
			if(strcmpi(numero[p],buscar)==0){ 
				pos=p; 
			}
		}
		
		if (pos==-1){ //Si no encontro
			printf("Numero de Trabajador no encontrado \n");
		}
		else{ //Si encontro, desplego los datos
			printf(" Nombre del trabajador: %s \n Numero del trabajador: %s \n Sueldo: %s \n Horas trabajadas: %s\n",nombre[pos],numero[pos],sueldo[pos],hor[pos]);
  		}
	}
	system("PAUSE");		
}

void bus_nombre(){ //Ciclo que busca a usuarios por nombre
	char buscar_nombre[20];
	int q,pe=-1;
	system("cls"); //Limpio pantalla
		    
	if(y==1) //Si no dio de alta a los trabajadores
		printf("Primero debes dar de alta a algunos usuarios\n");
	
	else{ //Si ya dio de alta trabajadores
		printf("Cual es el nombre del trabajador que buscas: ");
		while(getchar()!='\n'); //Limpio el buffer de entrada	
		gets(buscar_nombre); //Guardo el nombre a buscar
		
		for(q=0;q<3;q++){ //Ciclo para buscar trabajador
			if(strcmpi( nombre[q],buscar_nombre)==0) //Comparamos nombres
				pe=q; //Si encontro, guardar la posicion
		}
		if (pe==-1) //Si no encontro
			printf("Trabajador no encontrado \n");

		else //Si encontro, despliego datos
			printf(" Nombre del trabajador: %s \n Numero del trabajador: %s \n Sueldo: %s \n Horas trabajadas: %s\n",nombre[pe],numero[pe],sueldo[pe],hor[pe]);			
	}
	system("PAUSE");
}

void ord_nombre(){ //Funcion que mostrara todos los trabajadores ordenados alfabeticasmente
	int k,j; //Variables de ciclos auxiliares
	char aux[20], auxb[20], auxc[20], auxd[20]; //Variables donde guardaremos temporalmente los datos de usuario
	system("cls"); //Limpiamos pantalla
	
	if(y==1) 
		printf("Primero debes dar de alta a algunos usuarios\n");
	
	else{ 
		for(k=0;k<3;k++)
  			for(j=0;j<3-k;j++) {
    			if(strcmp(nombre[j],nombre[j-1])<0) 
        		{ 
        			strcpy(aux,nombre[j]);
        			strcpy(nombre[j],nombre[j-1]);
        			strcpy(nombre[j-1],aux);
        			strcpy(auxb,numero[j]);
        			strcpy(numero[j],numero[j-1]);
        			strcpy(numero[j-1],auxb);
        			strcpy(auxc,sueldo[j]);
        			strcpy(sueldo[j],sueldo[j-1]);
        			strcpy(sueldo[j-1],auxc);
        			strcpy(auxd,hor[j]);
        			strcpy(hor[j],hor[j-1]);
        			strcpy(hor[j-1],auxd);
    	    	}
    		}
    	//ya ordenado:
    	system("cls"); //Limpio pantalla
		printf("CONSULTAS GENERALES\n ----------- \n"); 
		for(k=0;k<3;k++){ 
			printf(" Nombre del trabajador: %s \n Numero del trabajador: %s \n Sueldo: %s \n Horas trabajadas: %s\n ------- \n",nombre[k],numero[k],sueldo[k],hor[k]);
		}  
	}
	system("PAUSE");	
}

