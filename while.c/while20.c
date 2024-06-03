#include <stdio.h>

int main() {
    int n, i, j, factorial, suma;
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    i = 1;
    suma = 0;
    
    while (i <= n) {
        j = 1;
        factorial = 1;
        while (j <= i) {
            factorial *= j;
            j++;
        }
        suma += factorial;
        i++;
    }
    
    printf("La suma de los factoriales de los primeros %d numeros es: %d\n", n, suma);
    
    return 0;
}
