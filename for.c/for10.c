#include <stdio.h>

int main() {
    int numero, esPrimo = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Verificar si el número es primo utilizando un bucle for
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            esPrimo = 0; // Si el número es divisible por algún número diferente de 1 y sí mismo, no es primo
            break;
        }
    }

    // Mostrar el resultado
    if (esPrimo)
        printf("%d es un numero primo.\n", numero);
    else
        printf("%d no es un numero primo.\n", numero);

    return 0;
}