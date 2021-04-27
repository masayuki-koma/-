#include <stdio.h>

int main(void)
{
    int a[3][4][2] = {0};
    int i = 0;
    int j = 0;
    int k = 0;
    int sizearr = sizeof(a)/sizeof(a[0][4][0]);
    printf("%d", sizearr);

    return 0;
}