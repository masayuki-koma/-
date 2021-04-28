#include <stdio.h>

int main(void)
{
    char s[] = "ABC";
    printf("s = %s",s);
    //エラーが発生する
    //error: array type 'char [4]' is not assignable
    //s = "DEF";
    printf("a = %s",s);
    return 0;
}