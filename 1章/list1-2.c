#include<stdio.h>
int main(void)
{
    int n;
    //ptrはint*型オブジェクト。その値は"整数を格納するオブジェクト"のアドレス
    int *ptr;
    n=57;
    //ポインタptrがオブジェクトnを指している
    ptr = &n;
    printf("n のあたい%d\n", n);
    printf("&nの値%p\n",&n);
    printf("ptrの値%p\n",ptr);
    return 0;

}