#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int matriz[4][5];
    int contador;

        for(int i = 0 ; i < 4 ;i++ ){
            contador = 0;
            for(int j = 0 ; j < 5 ; j++){
                if(j<4){
                    matriz[i][j] =(rand()%100);
                    contador = contador + matriz[i][j];
                    printf("%d ",matriz[i][j]);
                }
        else{
            printf("%d ",contador);
            printf("\n");
                }
            }
        printf("\n");
    }


    return 0;
}
