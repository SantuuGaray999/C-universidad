//Desarrolle un programa que almacene en un vector el número de días que tiene cada mes 
//(supondremos que es un año no bisiesto), pida al usuario que le indique un mes (1=enero,
//12=diciembre) y muestre en pantalla el número de días que tiene ese mes. 
int main(){
	int mes, vector[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	
	printf("\n1- Enero.");
	printf("\n2- Febrero.");
	printf("\n3- Marzo.");
	printf("\n4- Abril.");
	printf("\n5- Mayo.");
	printf("\n6- Junio.");
	printf("\n7- Julio.");
	printf("\n8- Agosto.");
	printf("\n9- Septiembre.");
	printf("\n10- Octubre.");
	printf("\n11- Noviembre.");
	printf("\n12- Diciembre.");
	printf ("\nseleccione un mes para ver sus dias: ");
	scanf("%d",&vector[12]);
	
	
	switch (vector[12]){
		case 1: printf("Enero tiene: %d", vector[0]);break;
		case 2: printf("Febrero tiene: %d", vector[1]);break;
		case 3: printf("Marzo tiene: %d", vector[2]);break;
		case 4: printf("Abril tiene: %d", vector[3]);break;
		case 5: printf("Mayo tiene: %d", vector[4]);break;
		case 6: printf("Junio tiene: %d", vector[5]);break;
		case 7: printf("Julio tiene: %d", vector[6]);break;
		case 8: printf("Agosto tiene: %d", vector[7]);break;
		case 9: printf("Septiembre tiene: %d", vector[8]);break;
		case 10: printf("Octubre tiene: %d", vector[9]);break;
		case 11: printf("Noviembre tiene: %d", vector[10]);break;
		case 12: printf("Diciembre tiene: %d", vector[11]);break;
		default: printf("seleccionaste un numero no existente en el programa.");
		return 1;
	}
}
