#include <stdio.h>

int main() {
    int n;
    float suma = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Calcular la suma de la serie de números fraccionarios utilizando un bucle for
    for (int i = 1; i <= n; ++i) {
        suma += 1.0 / i;
    }

    // Mostrar la suma de la serie de números fraccionarios
    printf("La suma de la serie de numeros fraccionarios hasta %d es: %.2f\n", n, suma);

    return 0;
}