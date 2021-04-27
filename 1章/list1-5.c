#include<stdio.h>

int main(void)
{
    register int n;
    //list1-5.c:6:35: error: address of register variable requested
    //レジスタを割り当てたオブジェクトにはアドレス演算子＆を定義できないからエラーになる
    printf("&nの値は%pです", &n);
    return 0;
}