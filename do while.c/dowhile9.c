#include <stdio.h>

int main() {
    int num, contador = 0;
    
    printf("Ingrese un número: ");
    scanf("%d", &num);

    int temp = num;

    do {
        contador++;
        temp /= 10;
    } while (temp != 0);

    printf("El número %d tiene %d dígitos.\n", num, contador);
    
    return 0;
}
