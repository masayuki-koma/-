#include <stdio.h>

int main(void)
{
    int n;
    int *p = &n;

    printf("&n : %lu\n",(unsigned long)&n);
    printf("&n : %lu\n",(unsigned long)p);
    printf("int &n : %u\n",(unsigned int)&n);

    return 0;
}