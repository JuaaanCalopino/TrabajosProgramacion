#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i = 0;
    
    printf("Ingrese el numero de elementos: ");
    scanf("%d", &n);
    
    printf("Serie de Fibonacci: ");
    while(i < n) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    
    printf("\n");
    
    return 0;
}
