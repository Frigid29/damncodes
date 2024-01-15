#include<stdio.h>

void main()
{
    FILE* fptr=fopen("jammy.txt","r");
    char c;
    while(fgetc(c,sizeof(char),fptr))
    {
        printf("%c",c);
    }
    fclose(fptr);
}