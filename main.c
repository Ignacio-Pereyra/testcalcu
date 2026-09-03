#include <stdio.h>
#include <stdlib.h>

#include "funcion.h"

int main()
{
    float a = 4;
    float b = 2;
    printf("%.2f elevado a %.2f = %.2f\n", a, b, potencia(a,b));
    printf("raiz %.2f de %.2f = %.2f\n", a, b, raiz(a,b));

    printf("Calculadora en C\n");
    printf("%.2f x %.2f = %.2f\n",a, b, multiplicar(a,b));
    printf("%.2f / %.2f = %.2f\n",a, b, dividir(a,b));
    return 0;
}
