#include <stdio.h>

int factorial(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int n, suma = 0;

    printf("Ingrese un número para calcular la suma de los factoriales de los primeros n números: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma += factorial(i); // Sumamos el factorial de cada número
    }

    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, suma);

    return 0;
}
