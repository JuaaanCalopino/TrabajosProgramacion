#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    
    printf("Ingrese el número de términos de la serie aritmética: ");
    scanf("%d", &n);

    do {
        suma += i;
        i++;
    } while (i <= n);

    printf("La suma de los primeros %d términos de la serie aritmética es: %d\n", n, suma);
    
    return 0;
}
