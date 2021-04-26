#include <stdio.h>

int main (void)
{
    int n = 10;
    int *p = &n;

    printf("nのサイズ：%u\n",(unsigned)sizeof n);
    printf("pのサイズ: %u\n",(unsigned)sizeof p);
    printf("*pのサイズ: %u\n",(unsigned)sizeof *p);
    printf("&nのサイズ: %u\n",(unsigned)sizeof &n);

    printf("-1のサイズ: %u\n",(unsigned)sizeof -1);
    printf("unsigned-1のサイズ: %u\n",(unsigned)sizeof (unsigned)-1);
    printf("-1のサイズ: %u\n",(unsigned)sizeof -1);
    printf("double-1のサイズ: %u\n",(unsigned)sizeof (double)-1);
    printf("double-1のサイズ: %u\n",(unsigned)sizeof ((double)-1));

    printf("n+2のサイズ: %u\n",(unsigned)sizeof n+2);
    printf("(n+2)のサイズ: %u\n",(unsigned)sizeof (n+2));
    printf("(n+2.0)のサイズ: %u\n",(unsigned)sizeof (n+2.0));


    // //*&nはnのアドレスの間接参照だからnになる
    // //&nが指しているオブジェクトだからnそのもの
    // printf("*&nのあたい: %d\n",*&n);
    // printf("pのあたい: %p\n", p);
    // //pの間接参照のアドレスだからnのアドレス=&nはすごいわかりやすい
    // //pが指しているオブジェクトへのポインタ
    // printf("&*pのあたい: %p\n", &*p);

    return 0;
}