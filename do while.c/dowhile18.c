#include <stdio.h>

int main() {
    int n, contador = 0;

    printf("Ingrese un número para contar los números primos hasta él: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        int esPrimo = 1; // Suponemos que i es primo al principio

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                esPrimo = 0; // Si i es divisible por algún número diferente de 1 y de sí mismo, no es primo
                break;
            }
        }

        if (esPrimo) {
            contador++; // Incrementamos el contador si encontramos un número primo
        }
    }

    printf("Hay %d números primos hasta %d.\n", contador, n);

    return 0;
}
