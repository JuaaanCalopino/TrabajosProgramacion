#include <stdio.h>

int main() {
    int base, exponente, resultado = 1, i = 0;
    
    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    
    do {
        resultado *= base;
        i++;
    } while (i < exponente);

    printf("%d elevado a la %d es: %d\n", base, exponente, resultado);
    
    return 0;
}
