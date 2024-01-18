// Programa final de curso Programación en Lenguaje C 
#include <stdio.h> //Declaramos librerías
#include <stdlib.h>
#include <string.h>

void altas(); //Función para dar de alta a los trabajadores
void clave(); //Función para buscar trabajadores por clave
void bus_nombre(); //Función para buscar trabajadores por nombre
void ord_nombre(); //Función para consultar a todos los trabajadores ordenados alfabéticamente
char nombre[3][20],numero[3][6],sueldo[3][6],hor[3][6]; //Variables de cada trabajador
int y=1; //Bandera indicadora de que no han ingresado trabajador (cuando está en 1)

int main(){
	char opcion; //Variable que guardara la opción seleccionada
	
	do{ //Hacer...
		system("cls"); //Limpiamos pantalla y desplegamos menú
		printf("\n----------------------------\nBienvenido usuario\n\n");
		printf("A - Altas: Agregar a trabajadores\n");
		printf("B - Consultas generales\n");
		printf("C - Consultas por claves\n");
		printf("D - Consultas por nombres\n");
		printf("E - Salir\n\n");
		printf("Selecciona una opcion: ");
		scanf("%s",&opcion); //Guardamos la opción seleccionada por el usuario
	
		//Mandamos a llamar a la función que el usuario selecciono
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
			case 'E': //Opción para salir del programa
				printf("Saliendo del programa \n");			
			break;
		
			default: //Opción que no está disponible en el menú
				printf("Opcion no valida");
			break;
		}	
	}while(opcion!='e' && opcion!='E'); 
	//Hacer mientras el usuario no selecciona la opción de salir...
	
	getchar();
	return 0;
}

void altas(){ //Función para dar de alta a trabajadores
	int x; //Variable contadora del ciclo
	system("cls"); //Limpiamos pantalla
	
	if(y==1){ //Si el usuario no ha dado de alta trabajadores...
		for(x=0;x<3;x++){ //Ciclo que permite dar de alta 3 trabajadores
			while(getchar()!='\n');//Limpiamos buffer de entrada
			printf("Ingrese el nombre del trabajador: ");
			gets(nombre[x]); //Guardamos nombre		
			printf("Ingrese el numero del trabajador: ");
			scanf("%s",&numero[x]);		
			printf("Ingrese el sueldo del trabajador: ");
			scanf("%s",&sueldo[x]);			
			printf("Ingrese las horas trabajadas: ");
			scanf("%s",&hor[x]);
			system("cls"); //Limpiamos pantalla
		}
		y=2; //Indicamos que ya dio de alta usuarios
	}
	else{ //En caso de que ya haya dado de alta a sus trabajadores
		printf("Ya diste de alta a tus trabajadores\n");
		system("PAUSE");		
	}
}

void clave(){ //Función que buscara usuarios por clave
	int p,pos=-1; //Inicializamos variables
	char buscar[6]; //Variable que guardara trabajador a buscar
	
	system("cls"); //Limpiamos pantalla
	if(y==1) //Si no ha dado de alta usuarios...
		printf("Primero debes dar de alta a algunos usuarios\n");
	
	else{ //Si ya dio de alta usuarios...
		printf("Cual es el numero del trabajador que buscas: ");
		while(getchar()!='\n');//Limpiamos buffer de entrada	
		gets(buscar); //Guardamos número a buscar
		
		for(p=0;p<3;p++){ //Buscamos con el ciclo
			if(strcmpi(numero[p],buscar)==0){ //Comparamos los números
				pos=p; //Si encontró, guardamos la posición
			}
		}
		
		if (pos==-1){ //Si no encontró...
			printf("Numero de Trabajador no encontrado \n");
		}
		else{ //Si encontró, desplegamos los datos
			printf(" Nombre del trabajador: %s \n Numero del trabajador: %s \n Sueldo: %s \n Horas trabajadas: %s\n",nombre[pos],numero[pos],sueldo[pos],hor[pos]);
  		}
	}
	system("PAUSE");		
}

void bus_nombre(){ //Ciclo que busca a usuarios por nombre
	char buscar_nombre[20]; //Variable donde se guarda el nombre a buscar
	int q,pe=-1; //Variables auxiliares
	system("cls"); //Limpiamos pantalla
		    
	if(y==1) //Si no ha dado de alta trabajadores...
		printf("Primero debes dar de alta a algunos usuarios\n");
	
	else{ //Si ya dio de alta trabajadores...
		printf("Cual es el nombre del trabajador que buscas: ");
		while(getchar()!='\n'); //Limpiamos buffer de entrada	
		gets(buscar_nombre); //Guardamos nombre a buscar
		
		for(q=0;q<3;q++){ //Ciclo para buscar trabajador
			if(strcmpi( nombre[q],buscar_nombre)==0) //Comparamos nombres
				pe=q; //Si encontró, guardar la posición
		}
		if (pe==-1) //Si no encontró...
			printf("Trabajador no encontrado \n");

		else //Si encontró, desplegamos datos
			printf(" Nombre del trabajador: %s \n Numero del trabajador: %s \n Sueldo: %s \n Horas trabajadas: %s\n",nombre[pe],numero[pe],sueldo[pe],hor[pe]);			
	}
	system("PAUSE");
}

void ord_nombre(){ //Función que mostrara todos los trabajadores ordenados alfabéticamente
	int k,j; //Variables de ciclos auxiliares
	char aux[20], auxb[20], auxc[20], auxd[20]; //Variables donde guardaremos temporalmente los datos de usuario
	system("cls"); //Limpiamos pantalla
	
	if(y==1) //Si no ha dado de alta usuarios...
		printf("Primero debes dar de alta a algunos usuarios\n");
	
	else{ //Si ya dio de alta usuarios...
		for(k=0;k<3;k++) //Corremos el ciclo 3 veces
  			for(j=0;j<3-k;j++) {//Cada ciclo principal lo ejecutamos 3 veces
    			if(strcmp(nombre[j],nombre[j-1])<0) //Si nombre[j] es menor alfabéticamente que [j-1]...
        		{ //Pasamos todo lo que había en [j] a [j-1]... y lo que había en [j-1] a [j]
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
    	//Una vez ordenados...
    	system("cls"); //Limpiamos pantalla
		printf("CONSULTAS GENERALES\n ----------- \n"); 
		for(k=0;k<3;k++){ //Y mostramos todos los nombres ordenados
			printf(" Nombre del trabajador: %s \n Numero del trabajador: %s \n Sueldo: %s \n Horas trabajadas: %s\n ------- \n",nombre[k],numero[k],sueldo[k],hor[k]);
		}  
	}
	system("PAUSE");	
}
