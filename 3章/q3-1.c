#include <stdio.h>

int main(void)
{
    int i = 0,j = 0, k = 0;
    int b[3][2][4] = {0};
    while( i <3){
        while(j < 2){
            while(k < 4){
                printf("&a[%d][%d][%d] = %p \n", i,j,k,&b[i][j][k]);

                k++;
            }
            k = 0;
            j++;
        }
        k = 0;
        j = 0;
        i++;
    }
    return 0;
    
}