#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "areas.h"

/*
Escribir un programa que permita calcular el area de diversas figuras: un triangulo rectangulo, un triangulo isosceles, un cuadrado, un trapecio y un circulo. Utilizar un array de punteros de
funciones, siendo las funciones las que permitan calcular el area.
*/

int main()
{
    float(*areas[])(float, float, float) = {area_triangulo_rectangulo, area_triangulo_isosceles, area_cuadrado, area_trapecio, area_circulo};
    int des;
    float x,y,z;
    do{
    printf("\n\nElija un tipo de area:\n");
    printf("1- Triangulo rectangulo.\n");
    printf("2- Triangulo isosceles.\n");
    printf("3- Cuadrado.\n");
    printf("4- Trapecio.\n");
    printf("5- Circulo.\n");
    printf("6- Salir.\n");
    scanf("%d",&des);

    switch (des)
    {
    case 1:
        {
            printf("\nDigite la base: ");
            scanf("%f",&x);
            printf("\nDigite la altura: ");
            scanf("%f",&y);
            z=0;
            printf("El area del triangulo rectangulo es %.2f.", areas[des-1](x,y,z));
                   break;
        }
    case 2:
        {
            printf("\nDigite la base: ");
            scanf("%f",&x);
            printf("\nDigite el tamano de los lados iguales: ");
            scanf("%f",&y);
            z=0;
            printf("El area del triangulo isosceles es %.2f.", areas[des-1](x,y,z));
                   break;
        }
    case 3:
        {
            printf("\nDigite la medida de sus lados: ");
            scanf("%f",&x);
            y=0;
            z=0;
            printf("El area del cuadrado es %.2f.", areas[des-1](x,y,z));
                   break;
        }
    case 4:
        {
            printf("\nDigite la altura: ");
            scanf("%f",&x);
            printf("\nDigite la base mayor: ");
            scanf("%f",&y);
            printf("\nDigite la base menor: ");
            scanf("%f",&z);
            printf("El area del trapecio es %.2f.", areas[des-1](x,y,z));
                   break;
    }  case 5:
        {
            printf("\nDigite el radio: ");
            scanf("%f",&x);
            y=0;
            z=0;
            printf("El area del circulo es %.2f.", areas[des-1](x,y,z));
                   break;
        }
    }
    } while (des!=6);
    return 0;
}
