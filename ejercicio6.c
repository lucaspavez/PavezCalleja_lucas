#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int matriz[7][24];

    for (int i = 0 ; i < 7 ; i++){
        for(int j = 0 ; j < 24 ; j++){
            matriz[i][j] = (rand()%30);
            printf("[%d C]  ",matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}
