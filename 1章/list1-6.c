#include <stdio.h>

int main(void)
{
    //%uはunsigned intを引数として10進数に変換する
    //(unsigned)=(unsigned int)であることに注意
    printf("char型は%uバイトです",(unsigned)sizeof(char));
    printf("int型は%uバイトです",(unsigned)sizeof(int));
    printf("long型は%uバイトです",(unsigned)sizeof(long));
    return 0;
}