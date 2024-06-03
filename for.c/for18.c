#include <stdio.h>

int main() {
    int n, contador = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Verificar si cada número desde 1 hasta n es primo utilizando un bucle for
    for (int num = 2; num <= n; ++num) {
        int esPrimo = 1; // Suponemos que num es primo inicialmente

        // Verificar si num es divisible por algún número diferente de 1 y sí mismo
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                esPrimo = 0; // num no es primo
                break;
            }
        }

        // Si num es primo, incrementar el contador
        if (esPrimo) {
            contador++;
        }
    }

    // Mostrar el número de primos encontrados
    printf("Hay %d numeros primos hasta %d\n", contador, n);

    return 0;
}
