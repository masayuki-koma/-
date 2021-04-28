#include <stdio.h>

/*ptrのみ変更されるパターン*/
int main(void)
{
    char str[5] = "ABCD";
    //ptrがstrのの先頭アドレスを指している・
    char *ptr = "ABCD";
    printf("str = %s\n",str);
    printf("ptr = %s\n",&ptr[0]);
    //これは単純にptrの指す先が文字列リテラル"ABCD"から"CDEF"に変更されただけ。
    //完全にok strは変更されない
    ptr = "DEFG";
    printf("str = %s\n",str);
    printf("ptr = %s\n",&ptr[0]);
    return 0;
}