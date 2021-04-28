#include <stdio.h>

int main(void)
{
    char str[0];
    str[0] = 'D';
    str[1] = 'A';
    str[2] = 'B';
    str[3] = 'C';
    str[4] = '\0';
    printf("配列str=%s",str);

    return 0;
}