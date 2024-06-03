#include <stdio.h>

int es_primo(int num) {
    int i;
    if (num <= 1) return 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, contador = 0, i;
    
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i++) {
        if (es_primo(i)) {
            contador++;
        }
    }
    
    printf("Hay %d numeros primos hasta %d\n", contador, n);
    
    return 0;
}
