#include <stdio.h>
#include <stdlib.h>

#include "funcion.h"

int main()
{
    float a = 10;
    float b = 5;
    printf("%.2f + %.2f = %.2f\n",a,b, suma(a,b));
    printf("%.2f - %.2f = %.2f\n",a,b, resta(a,b));
    return 0;
}
