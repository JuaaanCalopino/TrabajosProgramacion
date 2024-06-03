#include <stdio.h>

int main() {
    int n, suma = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los cubos de los primeros n números utilizando un bucle for
    for (int i = 1; i <= n; ++i) {
        suma += i * i * i;
    }

    // Mostrar la suma de los cubos de los primeros n números
    printf("La suma de los cubos de los primeros %d numeros es: %d\n", n, suma);

    return 0;