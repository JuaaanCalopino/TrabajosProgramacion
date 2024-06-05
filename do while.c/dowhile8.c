#include <stdio.h>

int main() {
    int n, producto = 1, i = 1;
    
    printf("Ingrese el número de términos de la serie geométrica: ");
    scanf("%d", &n);

    do {
        producto *= i;
        i *= 2; // La serie geométrica se construye multiplicando por 2 en cada paso
    } while (i <= n);

    printf("El producto de los primeros %d términos de la serie geométrica es: %d\n", n, producto);
    
    return 0;
}
