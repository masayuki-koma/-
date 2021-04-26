#include <stdio.h>

int main(void)
{
    int x,y;
    x=10;
    y = 1000;
    int *p1 = &x;
    int *p2 = &y;
    printf("p1の指しているオブジェクト%d\n",*p1);
    printf("p2の指しているオブジェクト%d\n",*p2);

    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;

    printf("p1の指しているオブジェクト%d\n",*p1);
    printf("p2の指しているオブジェクト%d\n",*p2);
    return 0;

}