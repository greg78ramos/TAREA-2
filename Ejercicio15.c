//TAREA 2 EJERCICIO 3 PROBLEMAS CON ARREGLOS//

#include <stdio.h>

int main()
{
    int i , tamaño , positivo = 0, negativo = 0, nulo = 0 ;
    
    printf("¿De qué tamaño es tu arreglo?\n");
    scanf("%d", &tamaño);
    
    int vect[tamaño];
    
    for( i = 0 ; i < tamaño ; i++ )
    {
        printf("Dame el valor %d de tu arreglo: ", i+1);
        scanf("%d", &vect[i]);
    }
    
     for( i = 0 ; i < tamaño ; i++ )
    {
        if(vect[i]>0)
        {
            positivo = positivo + 1;
        }
        else
        {
            if(vect[i]==0)
            {
                nulo = nulo + 1;
            }
            else
            {
                negativo = negativo + 1;
            }
        }
    }
    
    printf("El número positivos, negativos y nulos es igual a:\n");
    printf("Positivos: %d\nNegativos: %d\nNulos: %d", positivo,negativo,nulo);

    return 0;
}
