#include <stdio.h>

void swap(char **x, char **y)
{
    //ポインタtempにs1のエイリアス=*xを避難
    char *temp = *x;
    *x = *y;
    //ポインタyの指す先をs1に変更
    *y = temp;
}

void swap_str(char s1[], char s2[]){
    int i =0;
    while(s1[i]!= '\0'){
        char temp = s1[i];
        s1[i] = s2[i];
        s2[i] = temp;
        i++;
    }
}

int main(void)
{
    char s1[] = "ABC";
    char s2[] = "DEF";
    swap_str(s1,s2);
    printf("%s,%s",s1,s2);
    return 0;
}