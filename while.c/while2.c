#include <stdio.h>

int main() {
    int numero, inverso = 0, digito;
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    while(numero > 0) {
        digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero /= 10;
    }
    
    printf("El inverso es: %d\n", inverso);
    
    return 0;
}