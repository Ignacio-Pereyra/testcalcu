#include "funcion.h"

float potencia(float a, float b)
{
    return pow(a, b);
}

float raiz(float a, float b)
{
    return pow(a, 1.0/b);
}

float multiplicar(float a, float b)
{
    return a*b;
}

float dividir(float a, float b)
{
    if(b==0)
    {
        return 0;
    }
    return a/b;
}
