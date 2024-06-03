#include <stdio.h>

int main() {
    int num, inverso = 0, digito;
    
    printf("Ingrese un número: ");
    scanf("%d", &num);
    
    do {
        digito = num % 10;
        inverso = inverso * 10 + digito;
        num /= 10;
    } while (num != 0);

    printf("El inverso del número es: %d\n", inverso);
    
    return 0;
}
