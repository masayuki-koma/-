#include <stdio.h>

int main(void)
{
    char str[] = "ABC";
    //ポインタptrは"123"を指すように初期化されている
    //ポインタptrと文字列リテラル"ABC"のそれぞれがキオinsta 時期を占有している状態。
    char *ptr = "123";
    printf("str[]=%s\n",str);
    printf("ptrは%sを指す\n",ptr);
    return 0;
}