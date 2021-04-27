#include <stdio.h>

//*aを()で囲まないとポインタの配列と認識してエラーが起きる
void fill(int (*a)[2][4],int n , int no)
{
    int i = 0, j = 0, k = 0;
    while(i < n){
        while(j < 2){
            while(k <4){
                a[i][j][k] = no;
                k++;
            }
            k = 0;
            j++;
        }
        j = 0;
        i++;
    }
}
void print(int (*a)[2][4], int n , int no)
{
    int i = 0, j = 0, k = 0;
    while(i < n){
        while(j < 2){
            while(k <4){
                printf("%d",a[i][j][k]);
                k++;
            }
            putchar('\n');
            k = 0;
            j++;
        }
        putchar('\n');
        j = 0;
        i++;
    }

}

int main(void)
{
    int a[3][2][4]={0};
    int n = 3;
    int no = 5;
    fill(a,3,5);
    print(a,3,5);
    printf("%lu\n",(unsigned long) sizeof(*a));
    printf("%lu\n",(unsigned long) sizeof(a[0]));
    printf("%lu",(unsigned long) sizeof(a[0][0][0]));
    
    return 0;
    
}