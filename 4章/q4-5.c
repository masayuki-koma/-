#include <stdio.h>

int str_chum(const char *s, int c)
{
    int count = 0;
    while(*s){
        if(*s == c){
            count++;
        }
        s++;
    }
    return count;
}


int main(void)
{
    char *str = "AAADDF";
    int c = 'A';
    printf("%d\n",str_chum(str,c));
    return 0;
}