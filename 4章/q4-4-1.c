#include <stdio.h>
/* エラー例*/
int main(void)
{
    char str[5] = "ABCD";
    //ptrがstrのの先頭アドレスを指している・
    char *ptr = "ABCD";
    printf("str = %s\n",str);
    printf("ptr = %s\n",&ptr[0]);
    //ptrは文字列リテラルを指していて、それをscanfで書き込むことはできない
    //scanfはアドレス先の値を変更するので、メモリ上に存在する文字列リテラルを変更することはできないから
    scanf("%s", ptr);
    
    printf("str = %s\n",str);
    printf("ptr = %s\n",&ptr[0]);
    return 0;
}