#include <stdio.h>

// Función para calcular el inverso de un número
int inversoNumero(int num) {
    int i = 0;

    // Iterar a través de cada dígito del número usando un bucle for
    for (; num != 0; num /= 10) {
        i = i * 10 + num % 10;
    }

    return i;
}

int main() {
    int numero, resultado;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Calcular el inverso del número ingresado
    resultado = inversoNumero(numero);

    // Mostrar el resultado
    printf("El inverso de %d es: %d\n", numero, resultado);

    return 0;
}
