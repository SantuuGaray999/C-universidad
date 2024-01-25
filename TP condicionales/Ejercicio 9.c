/*Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo
conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y si trabajo más de 150
hs le dan otros $ 100 adicionales. Imprimir el sueldo */
#include <stdio.h>

#include <stdio.h>

int main() {
    // Valor de la hora
    int vh = 1000;
    // Horas trabajadas
    int ht;

    printf("Ingresar cantidad de horas trabajadas: ");
    scanf("%d", &ht);

    int sueldo = vh * ht;

    printf("El sueldo es de %d\n", sueldo);

    if (ht >= 50 && ht <= 150) {
        sueldo += 100;
        printf("El sueldo con extra del empleado fue de %d", sueldo);
    } else if (ht > 150) {
        sueldo += 200;
        printf("El sueldo con extra del empleado fue de %d", sueldo);
    }

    return 0;
}

