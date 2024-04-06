#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    char nombre [31]; // + caracter nulo
    char apell [31];

    printf("Ingrese su nombre y apellido: ");
    scanf("%30s %30s", nombre, apell);

    printf("\nHola! Bienvenido a SSL %s %s", nombre, apell);

    return EXIT_SUCCESS;
}