#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    while(i <= n) {
        if(i % 2 == 0) {
            suma += i;
        }
        i++;
    }
    
    printf("La suma de los numeros pares hasta %d es: %d\n", n, suma);
    
    return 0;
}
