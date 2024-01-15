#include<stdio.h>
int fac(a)
{
    if(a<=1)
    return 1;
    else
    return a*fac(a-1);
}
void main()
{
    int num;
    printf("enter the number ");
    scanf("%d",&num);
    int f=fac(num);
    printf("%d = factorial",f);
}