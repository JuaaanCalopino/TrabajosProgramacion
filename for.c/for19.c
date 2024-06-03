#include <stdio.h>

int main() {
    int n, numeroTriangular = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Calcular el n-ésimo número triangular utilizando un bucle for
    for (int i = 1; i <= n; ++i) {
        numeroTriangular += i;
    }

    // Mostrar el n-ésimo número triangular
    printf("El %d-esimo numero triangular es: %d\n", n, numeroTriangular);

    return 0;
}
