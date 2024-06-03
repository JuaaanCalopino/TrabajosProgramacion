#include <stdio.h>

int main() {
    int primerTermino, SdoTermino, numTerminos;

    // Solicitar al usuario los términos de la serie aritmética
    printf("Ingrese el primer termino: ");
    scanf("%d", &primerTermino);
    printf("Ingrese el segundo termino ");
    scanf("%d", &SdoTermino);
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &numTerminos);

    // Calcular la suma de la serie aritmética utilizando un bucle for
    int suma = 0;
    for (int i = 0; i < numTerminos; ++i) {
        suma += primerTermino + i * SdoTermino;
    }

    // Mostrar la suma de la serie aritmética
    printf("La suma de la serie aritmetica es: %d\n", suma);

    return 0;
}
