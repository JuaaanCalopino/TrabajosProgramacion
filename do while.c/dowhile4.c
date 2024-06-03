#include <stdio.h>

int main() {
    int numero, raizCubica = 0, i = 0;
    
    printf("Ingrese un número para calcular su raíz cúbica: ");
    scanf("%d", &numero);
    
    do {
        i++;
        raizCubica++;
    } while (raizCubica * raizCubica * raizCubica <= numero);

    if (raizCubica * raizCubica * raizCubica != numero) {
        printf("%d no es un cubo perfecto.\n", numero);
    } else {
        printf("La raíz cúbica de %d es: %d\n", numero, raizCubica);
    }
    
    return 0;
}
