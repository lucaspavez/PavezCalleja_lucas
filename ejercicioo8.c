#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int N;
    printf("ingrese el tamaño de su matriz: ");
    scanf("%d",&N);

    int matriz[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0 ; j < N; j++){
            matriz[i][j] = (rand()%100);
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            printf("%d ",matriz[N-1-i][j] );
            }
            printf("\n");
        }

    return 0;
}
