//TAREA 2 EJERCICIO 2 PROBLEMAS CON CONDICIONAL IF //

#include <stdio.h>

int main()
{
    double sueldoinicial, aumento = 0, sueldofinal;
    
    printf("Cuánto ganas 0o0? $");
    scanf("%lf", &sueldoinicial);
    if(sueldoinicial < 1000)
    {
        aumento = sueldoinicial * 0.15;
        sueldofinal = sueldoinicial + aumento;
    }
    else
    {
        aumento = sueldoinicial * 0.12;
        sueldofinal = sueldoinicial + aumento;
    }
    printf("Tu sueldo asciende a: %lf", sueldofinal);
    return 0;
}
