#include <stdio.h>


void swap ( int *x, int *y){
    if(*x > *y){
        int temp = *x;
        *x = *y;
        *y = temp;
    }


}

void sort_ptr3ary(int *x[]){
    if(*x[0] > *x[1]){
        swap(x[0],x[1]);
    }
    if(*x[0] > *x[2]){
        swap(x[0],x[2]);
    }
    if(*x[1] > *x[2]){
        swap(x[1],x[2]);
    }

}

int main(void)
{
    int a = 5, b = 3, c = 7;
    int *p[3];
    p[0] = &a;
    p[1] = &b;
    p[2] = &c;
    sort_ptr3ary(p);

    printf("%d,%d,%d \n",*p[0],*p[1],*p[2]);



    return 0;
}