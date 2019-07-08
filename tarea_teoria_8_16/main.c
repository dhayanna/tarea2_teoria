#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cadena[50];
    int i,j;
    printf("Introduzca la cadena de caracteres: \n");
    gets(cadena);
    int n= strlen(cadena);
    printf("\n----");
    for(i=0; i<n; i++)
    {
        printf("-");
    }
    printf("\n| %s |",cadena);
    printf("\n----");
    for(i=0; i<n; i++)
    {
        printf("-");
    }
}
