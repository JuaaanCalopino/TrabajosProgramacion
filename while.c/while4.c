#include <stdio.h>

int main() {
    int numero, radicando, raiz = 0;
    
    printf("Ingrese el numero: ");
    scanf("%d", &numero);
    
    radicando = numero;
    
    while(radicando >= raiz) {
        radicando -= raiz;
        raiz++;
    }
    
    if (radicando == 0) {
        printf("La raiz cúbica de %d es: %d\n", numero, raiz);
    } else {
        printf("%d no es un cubo perfecto.\n", numero);
    }
    
    return 0;
}
