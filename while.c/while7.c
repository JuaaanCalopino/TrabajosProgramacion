#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);
    
    while(i <= n) {
        suma += i;
        i++;
    }
    
    printf("La suma de los %d terminos es: %d\n", n, suma);
    
    return 0;
}

