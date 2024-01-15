#include<stdio.h>

void main()
{
    FILE* fptr=fopen("jimmy.txt","a");
    fprintf(fptr,"i am akash");
    fclose(fptr);
}