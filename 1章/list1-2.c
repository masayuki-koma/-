#include<stdio.h>
int main(void)
{
    int n;
    int *ptr;
    n=57;
    ptr = &n;
    printf("n のあたい%d\n", n);
    printf("&nの値%p\n",&n);
    printf("ptrの値%p\n",ptr);
    return 0;

}