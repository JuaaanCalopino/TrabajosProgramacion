#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    while(i <= n) {
        suma += i * i * i;
        i++;
    }
    
    printf("La suma de los cubos de los primeros %d numeros es: %d\n", n, suma);
    
    return 0;
}
