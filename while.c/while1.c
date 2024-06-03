#include <stdio.h>

int main() {
    int numero, suma = 0, digito;
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    while(numero > 0) {
        digito = numero % 10;
        suma += digito;
        numero /= 10;
    }
    
    printf("La suma de los digitos es: %d\n", suma);
    
    return 0;
}
