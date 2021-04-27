#include <stdio.h>

int main(void)
{
    int sw;
    int n1 = 15;
    int n2 = 73;
    int *p;
    printf("n1は%dでn2は%dです\n", n1,n2);
    printf("1か2を選択");
    scanf("%d",&sw);
    //ポインタのアクセス先の決定はコンパイル時に静的に行われるのではなく、プログラムの実行時に動的に行われている。
    if(sw ==1){
        p = &n1;
    }
    else{
        p = &n2;
    }
    *p = 99;
    printf("n1は%dでn2は%dです",n1,n2);
    return 0;
}