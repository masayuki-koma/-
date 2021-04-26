#include <stdio.h>

int main(void)
{
    int n;
    int *ptr;
    n = 57;
    ptr = &n;
    printf("nの値=%d\n",n);
    //ポインタに対して適用される演算子*は間接演算子と呼ばれ、*ptrはそのポインタが指すオブジェクトを表す式となる
    //*ptrはnのエイリアスと呼ばれる(エイリアス＝別名、あだ名)
    //あくまで*ptrという変数が存在するわけではない（-nみたいなもん）
    //ポインタ以外の変数には間接演算子*を適用できない
    printf("*ptrの値=%d\n",*ptr);
    return 0;

}