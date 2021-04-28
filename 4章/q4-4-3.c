#include <stdio.h>

int main(void)
{
    char str[5] = "ABCD";
    //ptrがstrのの先頭アドレスを指している。文字列リテラルを指しているわけではないことが今めっちゃ重要
    char *ptr = str;
    printf("str = %s\n",str);
    printf("ptr = %s\n",&ptr[0]);
    //scanfでptrの指す先のアドレスの文字列を変更する。つまりstrもptrも変更される。
    //scanfで変更するのはptrでもstrでもOK
    //scanf("%s", ptr);
    scanf("%s", str);
    printf("str = %s\n",str);
    printf("ptr = %s\n",ptr);
    return 0;
}