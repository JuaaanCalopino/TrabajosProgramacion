#include <stdio.h>

int main() {
    int num1, num2, mcd;
    
    printf("Ingrese dos números para encontrar su MCD: ");
    scanf("%d %d", &num1, &num2);

    int menor = (num1 < num2) ? num1 : num2;

    do {
        if (num1 % menor == 0 && num2 % menor == 0) {
            mcd = menor;
            break;
        }
        menor--;
    } while (menor > 0);

    printf("El MCD de %d y %d es: %d\n", num1, num2, mcd);
    
    return 0;
}
