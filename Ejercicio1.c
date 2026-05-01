//TAREA 2 EJERCICIO 1 PROBLEMAS SIMPLES//

#include <stdio.h>



int main()
{
    int n1, n2;
    int S=0, R=0, M=0;
    printf("Proporcioname dos numeros enteros separados por un espacio: \n");
    scanf("%d %d", &n1, &n2);
    S = n1+n2 , R = n1-n2, M = n1*n2;
    printf("la suma es igual a: %d\n", S);
    printf("la resta es igual a: %d\n", R);
    printf("la multiplicación es igual a: %d\n", M);

    return 0;
}
