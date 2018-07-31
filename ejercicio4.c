#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 0;
    printf("ingrese el tamaño de su matriz ");
    scanf("%d",&A);

    int matriz[A][A];
    int interruptor=1;

    printf("ingrese valores para la matriz de A x A \n");

        for(int i = 0 ; i < A ;i++ ){
            for(int j = 0 ; j < A ; j++){
                printf("elemento [%d , %d]: ", i , j);
                scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n");

        for(int i = 0 ; i < A ;i++ ){
            for(int j = 0 ; j < A ; j++){
                printf(" %d", matriz[i][j] );
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0 ; i < A ;i++ ){
        for(int j = 0 ; j < A ; j++){
            if (i!=j){
                if(matriz[i][j] != matriz[j][i]){
                    interruptor=0;
                }
            }
        }
    }

    if (interruptor != 1){
        printf("su matriz no es simetrica \n");
    }
        else{
            printf("su matriz es simetrica");
        }
        printf("\n");
    return 0;
}
