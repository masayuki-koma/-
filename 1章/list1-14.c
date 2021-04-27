#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort2(int *n1,int *n2){
    if(*n1 < *n2){
        swap(n1, n2);
    }
}

int main(void)
{
    int a,b;
    printf("整数a:");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);
    sort2(&a,&b);
    printf("整数a:%d",a);
    printf("整数b:%d",b);
    return 0;

}