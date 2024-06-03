#include <stdio.h>

// Función para calcular la raíz cuadrada de un número mediante restas sucesivas
float raizCuadrada(int num) {
    float raiz = 0.0;

    // Iterar hasta que el cuadrado de 'raiz' sea lo más cercano posible a 'num'
    for (; num >= 0; num -= raiz) {
        raiz += 0.1;
    }

    return raiz - 0.1; // Ajuste para obtener un resultado más preciso
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese el número del cual desea calcular la raíz cuadrada
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Calcular la raíz cuadrada usando la función 'raizCuadrada'
    float resultado = raizCuadrada(numero);

    // Mostrar el resultado
    printf("La raiz cuadrada de %d es aproximadamente %.2f\n", numero, resultado);

    return 0;
}