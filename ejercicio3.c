#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 0;
    printf("ingrese un valor para N: ");
    scanf("%d",&N);

    int arreglo[N][N];

    printf("ingrese valores para la matriz de N x N \n");

        for(int i = 0 ; i < N ;i++ ){
            for(int j = 0 ; j < N ; j++){
                printf("elemento [%d , %d]: ", i , j);
                scanf("%d",&arreglo[i][j]);
        }
    }
    printf("\n");

        for(int i = 0 ; i < N ;i++ ){
            for(int j = 0 ; j < N ; j++){
                printf(" %d", arreglo[i][j] );
        }
        printf("\n");
    }
    printf("\n");

    int sumatoria;
    int sumatoria2 = 0;

        for(int i = 0 ; i < N ;i++ ){
            sumatoria = arreglo[i][0];
            for(int j = 1 ; j < N ; j++){
                sumatoria = sumatoria+arreglo[i][j];
                }
        sumatoria2 = sumatoria + sumatoria2;
        printf("La suma de la fila %d es: %d",i+1,sumatoria);
        printf("\n");
    }
    printf("\nLa suma total de la matriz es: %d\n", sumatoria2);
    return 0 ;

}
