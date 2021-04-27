#include <stdio.h>

int main(void)
{
    int n = 123;
    //ポインタに代入するのではなくポインタを初期化している.
    //int *型のpを&nで初期化していると考える。
    int *p = &n;
    printf("nの値=%d\n",n);
    printf("*pの値=%d\n",*p);
    return 0;
}