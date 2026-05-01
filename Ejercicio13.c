//TAREA 2 EJERCICIO 1 PROBLEMAS CON ARREGLOS//

#include <stdio.h>

int main()
{
    int  i, tamaño, suma = 0;
    
    printf("Qué tamaño tiene tu arreglo?\n");
    scanf("%d", &tamaño);
    
    int vect[tamaño];
    
    for( i = 0 ; i < tamaño ; i++ )
    {
        printf("Proporciona un número para la casilla %d del arreglo: ", i+1 );
        scanf("%d", &vect[i]);
    }
    
    for( i = 0 ; i < tamaño ; i++ )
    {
        suma = suma + vect[i];
    }
    printf("La suma de los elementos del arreglo es: %d", suma);

    return 0;
}
