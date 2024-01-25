//Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es 
#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    // Ingresar los lados del triángulo
    printf("Ingrese el primer lado: ");
    scanf("%d", &lado1);

    printf("Ingrese el segundo lado: ");
    scanf("%d", &lado2);

    printf("Ingrese el tercer lado: ");
    scanf("%d", &lado3);
    
    if (lado1 == lado2 && lado2 == lado3) {
        printf("equilatero");
    } 
	else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("isosceles");
    } 
        
	else {
        printf("escaleno");    
	}

}    
