#include <stdio.h>

int main(void)
{
    printf("char型は%uバイトです",(unsigned)sizeof(char));
    printf("int型は%uバイトです",(unsigned)sizeof(int));
    printf("long型は%uバイトです",(unsigned)sizeof(long));
    return 0;
}