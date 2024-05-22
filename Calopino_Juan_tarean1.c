//transformalo a c por favor

#include <stdio.h>
int main(){
    //lo de arriba es la biblioteca
int entero;
//numeros sin decimales
char caracter;
//son como por decir codigos que hacemos cuando presionamos el "Alt" un numero o mas por ejemplo la arroba alt 64 
float flotante;
double doble;
//doble es como decir que le da mas precision al flotante un claro ejemplo con PI en flotante puede salir algunas decimas pero en doble salen muchas pero muchas mas
//Bienvenida
printf("Holaaaaa, bienvenidoo");
//printf sirve para mostrar el texto al usuario que utilice lo que hacemos

printf( "Ingrese un numero entero: " );
scanf( "%d", &entero );
// scanf ayuda que cuando ingrese un valor entero, lo almacena en su grupo de enteros

printf( "Ingresa un caracter: " );
scanf("%c", &caracter);
//repite lo mismo que arriba solo que en caracter

printf ("Ya mismo acabas!!, porfavor ingresa un flotante: ");
scanf("%f", flotante);



printf("Por ultimo ingresa un valor de mayor presicion: ");
scanf("%lf", &doble);

//POR RECALCAR QUE "c,d,lf,f" son abreviaturas que usa este lenguaje para referirse a lo que escribimos


//MOSTRAR DATOS OBTENIDOS
printf("los valores que ingresaste fueron: \n");
// el Slash invertido "\" significa como continuacion de la linea
printf("Numero entero: %d\n", entero);
//presenta a numero entero
printf("Caracter: %c\n", caracter);
//presenta los caracteres
printf("numero flotante: %.2f\n", flotante);
//el 2 significa que solo va a presentar dos decimales

printf("numero de doble presicion: %.2lf\n", doble);
//presenta mas decimales
printf("Espero le haya ayudado");
}



