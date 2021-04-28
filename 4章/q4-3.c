#include <stdio.h>

int main(void)
{
    char *p = "ABCD";
    char *q;
    q = p;
    //qにpの保持してるアドレスを渡していることでポインタqも文字列リテラル"ABCD"を指すようになった。
    printf("%s\n",q);
    return 0;
}