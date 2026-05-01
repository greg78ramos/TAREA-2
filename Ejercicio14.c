//TAREA 2 EJERCICIO 2 PROBLEMAS CON ARREGLOS//

#include <stdio.h>

int main()
{
    int i , entero , tamaño , veces = 0 ;
    
    printf("¿De qué tamaño es tu arreglo?\n");
    scanf("%d", &tamaño);
    printf("¿Cuál es el número entero a comparar?\n");
    scanf("%d", &entero);
    
    int vect[tamaño];
    
    for( i = 0 ; i < tamaño ; i++ )
    {
        printf("Dame el valor %d de tu arreglo: ", i+1);
        scanf("%d", &vect[i]);
    }
    
     for( i = 0 ; i < tamaño ; i++ )
    {
        if( entero == vect[i])
        {
            veces = veces + 1;
        }
    }
    
    printf("El número de veces que se encuentra %d dentro del arreglo es: %d", entero, veces);

    return 0;
}
