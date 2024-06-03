#include <stdio.h>

int main() {
    int n, suma = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Sumar los números pares hasta n utilizando un bucle for
    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }

    // Mostrar la suma de los números pares
    printf("La suma de los numeros pares hasta %d es: %d\n", n, suma);

    return 0;
}
