#include <stdio.h>

// Función para calcular la potencia de un número mediante sumas sucesivas
int potencia(int base, int exponente) {
    int resultado = 1;

    // I
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, exponente;

    // Solicitar al usuario que ingrese la base y el exponente
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    // Calcular la potencia usando la función 'potencia'
    int resultado = potencia(base, exponente);

    // Mostrar el resultado
    printf("%d El primer valor elevado a la  %d es igual a %d\n", base, exponente, resultado);

    return 0;
}