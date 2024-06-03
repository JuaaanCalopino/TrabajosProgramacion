#include <stdio.h>

int main() {
    int base, exponente, resultado = 1;
    
    printf("Ingrese la base: ");
    scanf("%d", &base);
    
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    
    while(exponente > 0) {
        resultado *= base;
        exponente--;
    }
    
    printf("El resultado es: %d\n", resultado);
    
    return 0;
}
