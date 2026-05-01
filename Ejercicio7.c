//TAREA 2 EJERCICIO 3 PROBLEMAS CON CONDICIONAL IF //

#include <stdio.h>

int main()
{
    double distancia, idavuelta, estancia, descuento = 0, ticket = 0;
    printf("Proporcioname la distancia de ida y el número de días de estancia separados por un espacio\n");
    scanf("%lf %lf", &distancia, &estancia);
    if(distancia > 400)
    {
        if(estancia > 7)
        {
            idavuelta = (2 * distancia);
            descuento = (idavuelta * 0.23)* 0.3;
            ticket = (idavuelta * 0.23) - descuento;
        }
        else
        {
            idavuelta = (2 * distancia);
            ticket = (idavuelta * 0.23);
        }
    }
    else
    {
    idavuelta = (2 * distancia);
    ticket = (idavuelta * 0.23);    
    }
    
    printf("El precio del ticket es igual a: %lf\n", ticket);
    printf("Siendo la distancia de ida y vuelta recorrida igual a: %lf", idavuelta);
    
    return 0;
}
