//TAREA 2 EJERCICIO 3 PROBLEMAS CON ESTRUCTURAS DE REPETICIÓN (FOR, WHILE)//

#include <stdio.h>

int main()
{
    int i, inicio, final, modulo = 0 , suma = 0; 
    
    printf("Es hora de calcular la suma de los números pares entre: ");
    scanf("%d", &inicio);
    printf("y: ");
    scanf("%d", &final);
    
    for( i = inicio+1 ; i < final ; i++)
    {
        modulo = i % 2;
        if ( modulo == 0 )
        {
            suma = suma + i;
        }
    }
    
    printf("La suma de los números pares comprendidos entre %d y %d es: %d", inicio, final, suma);

    return 0;
}
