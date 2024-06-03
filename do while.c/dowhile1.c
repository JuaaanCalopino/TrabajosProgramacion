#include <stdio.h>

int main() {
    int num, suma = 0, digito;
    
    printf("Ingrese los dígitos con el signo de suma y termine con 0:\n");
    
    do {
        scanf("%d", &digito);
        suma += digito;
    } while (digito != 0);

    printf("La suma de los dígitos es: %d\n", suma);
    
    return 0;
}

