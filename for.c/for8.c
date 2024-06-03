#include <stdio.h>

int main() {
    int primerTermino, razon;
    int numTerminos;

    // Solicitar al usuario los términos de la serie geométrica
    printf("Ingrese el primer termino: ");
    scanf("%d", &primerTermino);
    printf("Ingrese la razon: ");
    scanf("%d", &razon);
    printf("Ingrese el numero de terminos: ");
    scanf("%d", &numTerminos);

    // Mostrar la serie geométrica utilizando un bucle for
    printf("Serie geometrica:\n");
    printf("%d", primerTermino);
    for (int i = 1; i < numTerminos; ++i) {
        primerTermino *= razon;
        printf(", %d", primerTermino);
    }
    printf("\n");

    return 0;
}
