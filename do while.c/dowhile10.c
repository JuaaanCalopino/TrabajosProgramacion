#include <stdio.h>

int main() {
    int num, esPrimo = 1, i = 2;
    
    printf("Ingrese un número: ");
    scanf("%d", &num);

    if (num < 2) {
        esPrimo = 0;
    } else {
        do {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
            i++;
        } while (i <= num / 2);
    }

    if (esPrimo) {
        printf("%d es un número primo.\n", num);
    } else {
        printf("%d no es un número primo.\n", num);
    }
    
    return 0;
}
