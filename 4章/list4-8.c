#include <stdio.h>

int main(void)
{
    char str[] = "ABC";
    char *ptr = "123";
    printf("str[]=%s\n",str);
    printf("ptrは%sを指す\n",ptr);
    return 0;
}