#include<stdio.h>
void swap(int* x, int* y)
{
    //printf("%p",x);
    *x= *x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
void main()
{
    int x=5,y=6;
    swap(&x,&y);
    printf("x= %d  y= %d ",x,y);
}