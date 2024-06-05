#include <stdio.h>

int main() {
    int n;
    float producto = 1.0;

    printf("Ingrese un número para calcular el producto de la serie fraccionaria: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        producto *= 1.0 / i; // Multiplicamos por el inverso de cada número
    }

    printf("El producto de la serie fraccionaria hasta %d términos es: %.2f\n", n, producto);

    return 0;
}
