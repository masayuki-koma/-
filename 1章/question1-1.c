#include <stdio.h>

int main (void)
{
    int n = 10;
    int *p = &n;

    printf("nのサイズ：%u\n",(unsigned)sizeof n);
    printf("pのサイズ: %u\n",(unsigned)sizeof p);
    printf("*&nのサイズ: %u\n",(unsigned)sizeof *&n);
    printf("&*pのサイズ: %u\n",(unsigned)sizeof &*p);

    printf("*&nのあたい: %d\n",*&n);
    printf("pのあたい: %p\n", p);
    printf("&*pのあたい: %p\n", &*p);

    return 0;
}