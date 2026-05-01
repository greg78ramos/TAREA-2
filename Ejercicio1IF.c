//TAREA 2 EJERCICIO 1 PROBLEMAS CON CONDICIONAL IF //

#include <stdio.h>

int main()
{
    double MontoEntrada, MontoTotal = 0, Descuento;
    printf("Cuál es el monto que debe pagar? $");
    scanf("%lf", &MontoEntrada);
    
    if(MontoEntrada > 2500)
    {
        Descuento = MontoEntrada * 0.08;
        MontoTotal = MontoEntrada - Descuento;
    }
    else
    {
        MontoTotal = MontoEntrada;
    }
    printf("El monto total es igual a: %lf", MontoTotal);
    return 0;
}
