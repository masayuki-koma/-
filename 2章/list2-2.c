#include <stdio.h>

int main(void)
{
    int a[5];
    printf("a　の値=%p\n",a);
    printf("&a[0]の値=%p\n",&a[0]);
    if(a == &a[0]){
        printf("大正解！一致だね");
    }
    return 0;
}