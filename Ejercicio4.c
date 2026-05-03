//TAREA 2 EJERCICIO 4 PROBLEMAS SIMPLES//

#include <stdio.h>

int main()
{
    int tasa;
    double inversion , totinv = 0 , MONEYSITO = 0 , tasac = 0;
    char decision;
    
    printf("Este programa calcula el monto de dinero que obtendrás al finalizar el mes :)\n");
    
    do
    {
        printf("Proporcioname el monto invertido: ");
        scanf("%lf", &inversion);
    
        totinv = totinv + inversion;
    
        printf("Deseas agregar más inversión?    s / n\n");
        scanf(" %c", &decision);
    }
    while( decision == 's' || decision == 'S' );
    
    printf("Cuál es la tasa de interés?, proporcionala en forma de porcentaje: ");
    scanf("%d", &tasa);
    
    tasac = ( 0.01 * tasa) * totinv;
    MONEYSITO = totinv + tasac;
    
    printf("Tu dinero crecio de $%lf a $%lf 0o0", totinv, MONEYSITO);
    
    return 0;
}
