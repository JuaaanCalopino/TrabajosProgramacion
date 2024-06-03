#include <stdio.h>

int main() {
    int n;
    float producto = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Calcular el producto de la serie de números fraccionarios utilizando un bucle for
    for (int i = 1; i <= n; ++i) {
        producto *= 1.0 / i;
    }

    // Mostrar el producto de la serie de números fraccionarios
    printf("El producto de la serie de numeros fraccionarios hasta %d es: %.6f\n", n, producto);

    return 0;
}
