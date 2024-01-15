#include<stdio.h>
void main()
{
    int r,c;
    printf("\nenter the order of matrix in row * column form ");
    scanf("%d %d", &r, &c);
    int m[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("nenter the %d element of %d row ", j+1,i+1);
            scanf("%d", &m[i][j]);
        }
    } 
    printf("\noriginal matrix: \n");
    for(int i =0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d    ",m[i][j]);
        }
        printf("\n");
    }
    //transpose section
    printf("\n Transpose Matrix: \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d      ",m[j][i]);
        }
        printf("\n");
    }
}