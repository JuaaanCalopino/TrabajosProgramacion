#include <stdio.h>

int main() {
    int numero, contador = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Calcular el número de dígitos utilizando un bucle for
    for (int temp = numero; temp != 0; temp /= 10) {
        contador++;
    }

    // Mostrar el número de dígitos
    printf("El numero de digitos en %d es: %d\n", numero, contador);

    return 0;
}