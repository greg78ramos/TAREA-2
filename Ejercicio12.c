//TAREA 2 EJERCICIO 4 PROBLEMAS CON ESTRUCTURAS DE REPETICIÓN (FOR, WHILE)//

#include <stdio.h>

int main()
{
    int num , i = 1 ;
    long long producto = 1 ;
    
    do //Validación de datos//
    {
        printf("Dame un numero entero, este puede encontrarse del 0 al infinito\n");
        printf("Número: ");
        scanf("%d", &num);
    }
    while( num < 0 );
    
    if( num == 0 ) //factorial de 0//
    {
        producto = 1;
    }
    else //factorial de cualquier número//
    {
        do
        {
            producto = producto * i ;
            i = i + 1;
        }
    while( i <= num );
    }
    printf("%d! es igual a: %lld", num, producto);

    return 0;
}
