#include <stdio.h>

int main() {
    int n, suma = 0, factorial = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los factoriales de los primeros n números utilizando un bucle for
    for (int i = 1; i <= n; ++i) {
        factorial *= i; // Calcular el factorial de i
        suma += factorial; // Sumar el factorial al total
    }

    // Mostrar la suma de los factoriales de los primeros n números
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma);

    return 0;
}
