#include <stdio.h>

int str_length(const char s[])
{
    int len = 0;
    while(s[len] !='\0'){
        len++;
    }
    return len;
}
int main(void)
{
    char *str = "ASDFF";

    printf("文字列の長さは%dです",str_length(str));
}