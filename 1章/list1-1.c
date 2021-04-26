#include <stdio.h>

int main(void)
{
    int n1 = 15;
    int n2 = 73;

    printf("n1の値=%d\n",n1);
    printf("n2の値=%d\n",n2);

    //&1,&2はオブジェクトn1,n2のアドレス値
    //アドレス値の表示のための変換指定は%p
    //多くの処理系では4~8桁の16進数
    //%dだとwarning
    //n1のアドレス値=-517737064
    // n2のアドレス値=0x7ffee123f594のように16進数に変換されてしまう
    printf("n1のアドレス値=%d\n",&n1);
    printf("n2のアドレス値=%p\n",&n2);

    return 0;
}