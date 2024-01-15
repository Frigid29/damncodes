#include<stdio.h>
#include<string.h>
void main()
{
    char s[]="akash si ngh ";
    int c=0;
    int bs=0;
    while(s[c]!=0)
    {
        c++;
        if(s[c]==(char)(32))
            bs++;
    }
    printf("length = %d",c);
    printf("\nblank space= %d",bs);
    printf("\n%d", strlen(s));
}