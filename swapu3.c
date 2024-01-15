#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("enter the value of b ");
    scanf("%d",&b);
    printf("\noriginal value of a = %d \t b = %d ",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nswap value of a = %d \t b = %d ",a,b);
}