#include<stdio.h>

void main()
{
    FILE* fptr=fopen("jammy.txt","a");
    printf("i am akash  ");
    int a;
    scanf("%d",&a);
    fprintf(fptr,"\nhola %d",a);
    fclose(fptr);
}