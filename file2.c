#include<stdio.h>

void main()
{
    FILE* fptr=fopen("jammy.txt","r");
    char c[300];
    int a=1;
    while(fgets(c,100,fptr))
    {
        printf("\n%d",a);
        printf("\n%s",c);
        a++;
    }
    fclose(fptr);
}