#include <stdio.h>

int main() {
    int n;
    float suma = 0.0;

    printf("Ingrese un número para calcular la suma de la serie fraccionaria: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += 1.0 / i; // Sumamos el inverso de cada número
    }

    printf("La suma de la serie fraccionaria hasta %d términos es: %.2f\n", n, suma);

    return 0;
}
