#include <stdio.h>

void swap(double *x, double *y){
    double temp = *x;
    *x = *y;
    *y = temp;
}


void sort3(double *x1,double *x2,double *x3){
    if(*x1 >*x2){
        swap(x1,x2);
    }
    if(*x1 >*x3){
        swap(x1,x3);
    }
    if(*x2 >*x3){
        swap(x2,x3);
    }
}

int main(void)
{
    double d1 = 1.7;
    double d2 = 2.3;
    double d3 = 1.2;
    sort3(&d1,&d2,&d3);
    printf("%lf,%lf,%lf",d1,d2,d3);
    return 0;
}