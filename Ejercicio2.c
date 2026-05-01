//TAREA 2 EJERCICIO 2 PROBLEMAS SIMPLES //

#include <stdio.h>
#include <math.h>

int main()
{
    double r, A=0, C=0;
    printf("Proporcioname el radio de tu circunferencia :) ");
    scanf("%lf", &r);
    A = M_PI * (r*r) , C = 2 * (M_PI * r) ;
    printf("El area del circulo es igual a: %lf\n Mientras que la circunferencia es igual a: %lf", A, C);

    return 0;
}
