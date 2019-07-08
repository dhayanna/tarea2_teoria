#include "areas.h"
float area_triangulo_rectangulo(float base, float altura, float extra)
{
    return (base*altura)/2;
}

float area_triangulo_isosceles(float base, float lados_iguales, float extra)
{
    return (base*sqrt((pow(lados_iguales,2)-(pow(base,2)/4))))/2.0;
}

float area_cuadrado(float lado, float extra1, float extra2)
{
    return pow(lado,2);
}

float area_trapecio(float altura,float base_mayor,float base_menor)
{
    return altura*((base_mayor+base_menor)/2.0);
}

float area_circulo(float radio, float extra1, float extra2)
{
    return 3.14*pow(radio,2);
}
