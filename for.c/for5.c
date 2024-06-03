#include <stdio.h>

int main() {
    int numTerminos;

    // Solicitar al usuario el número de términos para calcular en la serie de Fibonacci
    printf("Ingrese el numero de terminos para la serie de Fibonacci: ");
    scanf("%d", &numTerminos);

    int primero = 0, segundo = 1, siguiente;

    // Mostrar los primeros dos términos de la serie
    printf("Serie de Fibonacci hasta el termino %d:\n", numTerminos);
    printf("%d, %d", primero, segundo);

    // Calcular y mostrar los siguientes términos utilizando un bucle for
    for (int i = 2; i < numTerminos; i++) {
        siguiente = primero + segundo;
        printf(", %d", siguiente);
        primero = segundo;
        segundo = siguiente;
    }
    printf("\n");

    return 0;
}
