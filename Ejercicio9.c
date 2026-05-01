//TAREA 2 EJERCICIO 1 PROBLEMAS CON ESTRUCTURAS REPETITIVAS (FOR,WHILE)//


#include <stdio.h>

int main()
{
    int num, i , tabla = 0;
    printf("Calculemos la tabla de multiplicar del número: ");
    scanf("%d", &num);
    for( i = 0 ; i < 10 ; i++ )
    {
        tabla = ( i + 1 ) * num;
        printf("%d x %d = %d\n", num, i+1, tabla);
    }
    return 0;
}
