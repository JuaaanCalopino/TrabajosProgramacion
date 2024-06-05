#include <stdio.h>

int main() {
    int n, i = 0, primero = 0, segundo = 1, siguiente;

    printf("Ingrese el número de elementos de la serie de Fibonacci: ");
    scanf("%d", &n);
    
    printf("Los %d elementos de la serie de Fibonacci son:\n", n);

    do {
        printf("%d, ", primero);
        siguiente = primero + segundo;
        primero = segundo;
        segundo = siguiente;
        i++;
    } while (i < n);
    
    printf("\n");

    return 0;
}
