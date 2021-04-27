#include <stdio.h>

int main(void)
{
    int i= -2;
    int a[5]={0,1,2,3,4};
    int *p = &a[2];
    while(i<3){
        printf("&a[%d]=%p p+%d = %p\n",i,&a[i+2],i,p+i);
        i++;
    }
    return 0;
}