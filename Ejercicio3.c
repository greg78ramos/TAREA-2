//TAREA 2 EJERCICIO 3 PROBLEMAS SIMPLES //

#include <stdio.h>

int main()
{
    double D, C = 0 , DlrP = 11.96 ;
    printf("Proporcioname la cantidad en dolares: $");
    scanf("%lf", &D);
    C = D * DlrP ;
    printf("Tu cantidad de dólares en pesos es igual a: %lf pesos", C);

    return 0;
}
