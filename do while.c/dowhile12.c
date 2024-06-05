#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    
    printf("Ingrese un número para sumar los números impares hasta él: ");
    scanf("%d", &n);

    do {
        suma += i;
        i += 2; // Sumamos los números impares
    } while (i <= n);

    printf("La suma de los números impares hasta %d es: %d\n", n, suma);
    
    return 0;
}
