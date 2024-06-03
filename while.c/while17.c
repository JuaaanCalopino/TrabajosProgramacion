#include <stdio.h>

int main() {
    int n, i = 1;
    float producto = 1.0;
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    while(i <= n) {
        producto *= 1.0 / i;
        i++;
    }
    
    printf("El producto de la serie hasta 1/%d es: %f\n", n, producto);
    
    return 0;
}
