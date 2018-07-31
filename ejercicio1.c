#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N = 6;
    int arreglo[N][N];

    for(int i = 0 ; i < N ;i++ ){
        for(int j = 0 ; j < N ; j++){
            printf(" 0", arreglo[i][j] );
        }
        printf("\n");
    }
    return 0 ;
}
