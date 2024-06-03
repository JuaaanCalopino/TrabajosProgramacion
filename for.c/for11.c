#include <stdio.h>

// Función para calcular el MCD utilizando el algoritmo de Euclides
int mcd(int a, int b) {
    int temp;
    // Asegurar que 'a' es mayor o igual que 'b'
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    // Iterar hasta que 'b' sea cero
    for (; b != 0;) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a; // El MCD está en 'a'
}

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos números
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Calcular y mostrar el MCD utilizando la función 'mcd'
    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd(num1, num2));

    return 0;
}
