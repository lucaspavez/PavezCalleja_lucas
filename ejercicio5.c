#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , M;
    printf("ingrese un el largo de su matriz: ");
    scanf("%d",&N);
    printf("ingrese el ancho de su matriz: ");
    scanf("%d",&M);

    int matriz[N][M];
      for(int i = 0 ; i < N ;i++ ){
            for(int j = 0 ; j < M ; j++){
                printf("elemento [%d , %d]: ", i , j);
                scanf("%d",&matriz[i][j]);
        }
    }
        for(int i = 0 ; i < N ;i++ ){
            for(int j = 0 ; j < M ; j++){
                printf(" %d", matriz[i][j] );
        }
        printf("\n");
    }
    printf("\n");
        for(int i = 0 ; i < M ;i++ ){
            for(int j = 0 ; j < N ; j++){
                    printf("%d ",matriz[j][i]);
            }
            printf("\n");
        }


    return 0;
}
