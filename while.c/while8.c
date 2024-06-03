#include <stdio.h>

int main() {
    int n, producto = 1, i = 1;
    
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &n);
    
    while(i <= n) {
        producto *= 2;
        i++;
    }
    
    printf("El producto de los %d terminos es: %d\n", n, producto);
    
    return 0;
}
