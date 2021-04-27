#include <stdio.h>

void sum_diff(int x, int y , int *wa, int *sa)
{
    int x_add = x+y;
    int x_diff = x-y;
    *wa = x_add;
    *sa = x_diff;

}

int main(void)
{
    int x = 10;
    int y = 3;
    int *real_wa = &x;
    int *real_sa = &y;
    sum_diff(x,y,real_wa,real_sa);
    printf("real_wa:%d\n",*real_wa);
    printf("real_sa:%d\n",*real_sa);
}
