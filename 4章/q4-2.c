#include <stdio.h>

int main(void)
{
    char str[15];
    //ポインタはアドレス値と型を情報にもつ
    //&strのように&+配列名は配列全体へのポインタ（先頭アドレスとchar[15]の型）となる
    //本来は配列の先頭要素へのポインタ（つまり先頭アドレスとchar型）
    //正解は&str[0] = str これは先頭アドレスと方はchar型で一致。
    //&str[0]と型は異なるが値は同じなのでwarningがでながらも同じ値になる。
    scanf("%s",&str[0]);
    printf("あなたは%sを入力しましたね。\n",str);
    return 0;
}