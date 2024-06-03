#include <stdio.h>

int main() {
    int numero, es_primo = 1, i = 2;
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    while(i <= numero/2 && es_primo) {
        if(numero % i == 0) {
            es_primo = 0;
        }
        i++;
    }
    
    if(es_primo)
        printf("%d es primo\n", numero);
    else
        printf("%d no es primo\n", numero);
    
    return 0;
}

