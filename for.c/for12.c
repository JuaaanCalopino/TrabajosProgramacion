#include <stdio.h>

int main() {
    int n, suma = 0;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Calcular la suma de los números impares hasta n utilizando un bucle for
    for (int i = 1; i <= n; i += 2) {
        suma += i;
    }

    // Mostrar la suma de los números impares
    printf("La suma de los numeros impares hasta %d es: %d\n", n, suma);

    return 0;
}
