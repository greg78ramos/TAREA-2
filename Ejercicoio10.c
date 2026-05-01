//TAREA 2 EJERCICIO 2 PROBLEMAS CON ESTRUCTURAS REPETITIVAS (FOR,WHILE)//

#include <stdio.h>

int main()
{
    
    int i, num, positivos = 0 , negativos = 0 , nulos = 0;
    
    
    for( i = 0 ; i < 100 ; i++)
    {
    
    printf("Dame un número: ");
    scanf("%d", &num);
    
    if( num > 0)
    {
        positivos = positivos + 1;
    }
    else
    {
        if( num == 0)
        {
            nulos = nulos + 1;
        }
        else
        {
            negativos = negativos + 1;
        }
    }
    }
    printf("De los 100 números leídos:\n%d fueron positivos.\n%d fueron negativos.\n%d fueron nulos.", positivos, negativos, nulos);

    return 0;
}
