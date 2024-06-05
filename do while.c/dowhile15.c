#include <stdio.h>

int main() {
    int n, suma = 0, i = 1;
    
    printf("Ingrese un número para calcular la suma de los cubos de los primeros n números: ");
    scanf("%d", &n);

    do {
        suma += i * i * i; // Sumamos el cubo del número actual
        i++;
    } while (i <= n);

    printf("La suma de los cubos de los primeros %d números es: %d\n", n, suma);
    
    return 0;
}
