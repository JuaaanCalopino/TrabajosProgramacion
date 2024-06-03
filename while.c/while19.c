#include <stdio.h>

int main() {
    int n, i, numero_triangular = 0;
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        numero_triangular += i;
    }
    
    printf("El numero triangular de %d es: %d\n", n, numero_triangular);
    
    return 0;
}
