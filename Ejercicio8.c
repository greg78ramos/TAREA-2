//TAREA 2 EJERCICIO 4 PROBLEMAS CON CONDICIONAL IF //

#include <stdio.h>

int main()
{
    int n1, n2, mod1 = 0, mod2 = 0;
    printf("Proporcioname número 1 y número 2 separados por un espacio\n");
    scanf("%d %d", &n1, &n2);
    
    mod1 = n2%n1;
    mod2 = n1%n2;
    
    if(mod1 == 0)
    {
        printf("%d es divisor de %d\n", n1, n2);
    }
    else
    {
        printf("%d no es divisor de %d\n", n1, n2);
    }
    
    if(mod2 == 0)
    {
        printf("%d es divisor de %d\n", n2, n1);
    }
    else
    {
        printf("%d no es divisor de %d\n", n2, n1);
    }
    
    return 0;
}
