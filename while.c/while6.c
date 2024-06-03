#include <stdio.h>

int main() {
    int numero, factorial = 1, i = 1;
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    while(i <= numero) {
        factorial *= i;
        i++;
    }
    
    printf("El factorial de %d es: %d\n", numero, factorial);
    
    return 0;
}
