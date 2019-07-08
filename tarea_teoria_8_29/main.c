#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Si la matriz no tiene punto de silla, no retorna nada y el programa se termina.
    int i,j,m,x,y,pos1,n1,n2;
    float matriz[20][20],min_fil,max_col;

    printf("Inserte el numero de filas de la matriz: \n");
    scanf("%d",&n1);
    printf("Inserte el numero de columnas de la matriz: ");
    scanf("%d",&n2);

    for(x=0; x<n1; x++)
    {
        for(y=0; y<n2; y++)
        {
            printf("\nIntroduzca valor en (%d,%d): ",x,y);
            scanf("%f",&matriz[x][y]);
        }
    }

        for(m=0; m<n1; m++)
        {
            min_fil=10000,max_col=(-100000);
            i=0;
            while(i<(n2-1))
            {
                if(matriz[m][i]<matriz[m][i+1]||matriz[m][i]<min_fil)
                {
                    min_fil=matriz[m][i];
                    pos1=i;
                }
                i++;
            }
            if(matriz[m][i]<min_fil)
            {
                min_fil=matriz[m][i];
                pos1=i;
            }

            j=0;
            while(j<(n1-1))
            {
                if(matriz[j][pos1]>matriz[j+1][pos1]||matriz[j][pos1]>max_col)
                {
                    max_col=matriz[j][pos1];
                }
                j++;
            }
            if(matriz[j][pos1]>max_col)
            {
                max_col=matriz[j][pos1];
            }

            if(min_fil==max_col)
            {
                printf("\nLa matriz tiene punto de silla. Es el numero %.2f y esta en la posicion (%d,%d).",min_fil,m,pos1);
            }

        }
}

