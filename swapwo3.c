#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("enter the value of b ");
    scanf("%d",&b);
    printf("\noriginal value of a = %d \t b = %d ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nswap value without using 3rd variable of a = %d \t b = %d ",a,a/b);
}