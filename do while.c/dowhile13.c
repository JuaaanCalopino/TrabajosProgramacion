#include <stdio.h>

int main() {
    int n, suma = 0, i = 2;
    
    printf("Ingrese un número para sumar los números pares hasta él: ");
    scanf("%d", &n);

    do {
        suma += i;
        i += 2; // Sumamos los números pares
    } while (i <= n);

    printf("La suma de los números pares hasta %d es: %d\n", n, suma);
    
    return 0;
}
