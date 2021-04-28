#include <stdio.h>

int main(void)
{
    char str[15];
    //&strのように&+配列名は配列全体へのポインタとなる
    //&str[0]と型は異なるが値は同じなのでwarningがでながらも同じ値になる。
    scanf("%s",&str[0]);
    printf("あなたは%sを入力しましたね。\n",str);
    return 0;
}