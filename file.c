//program related to file handling
#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr= fopen("abc.txt","r");
    /*char a[]= "akash is a good boi ";
    fputs(a,ptr);
    fputs("\n",ptr);*/
    char ch;
    while((ch=getc(ptr))!= EOF)
    printf("%c",ch);
    
    
    fclose(ptr);

}