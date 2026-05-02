//TAREA 2 EJERCICIO 4 PROBLEMAS CON ARREGLOS//

#include <stdio.h>

int main()
{
    int i , vect[100] , num = 0 , mod = 0 ;
    printf("Este programa enlista los primeros 100 numeros pares 0o0\n");
    printf("Dado que la operación: 0 modulo 2 (0%2) es igual a 0, el primer número par es 0 :)\n");
    mod = 0%2;
    printf("Comprobación: 0 % 2 = %d\n-Lista Completa de los primeros 100 números pares-\n", mod);
    
    
    for( i = 0 ; i < 100 ; i++ )
    {
        vect[i] = i * 2;
    }
    
    for( i = 0 ; i < 100 ; i++ )
    {
        printf("%d\n", vect[i]);
    }

    return 0;
}
