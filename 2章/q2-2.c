#include <stdio.h>

void ary_cpy(int  a[], const int b[], int n)
{
    while(n>0)
    {
        *a = *b;
        a++;
        b++;
        n--;
    }
}
int main(void)
{
    int a[5] ={3,4,5,6,7};
    const int b[5] = {4,5,6,8,10};
    ary_cpy(a,b,5);
    int i =  0;
    while(i < 5){
        printf("%d\n",a[i]);
        i++;
    }
    return 0;
}