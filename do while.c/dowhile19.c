#include <stdio.h>

int main() {
    int n;

    printf("Ingrese un número para calcular su número triangular: ");
    scanf("%d", &n);

    int triangular = (n * (n + 1)) / 2;

    printf("El número triangular de %d es: %d\n", n, triangular);

    return 0;
}
