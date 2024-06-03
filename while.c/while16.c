#include <stdio.h>

int main() {
    int n, i = 1;
    float suma = 0.0;
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    while(i <= n) {
        suma += 1.0 / i;
        i++;
    }
    
    printf("La suma de la serie hasta 1/%d es: %f\n", n, suma);
    
    return 0;
}
