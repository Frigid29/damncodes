#include<stdio.h>
void main()
{
    int r,c; 
    printf("Number of rows in matrix: ");
    scanf("%d",&r);
    printf("Number of columns in matrix: ");
    scanf("%d",&c);
    int matrix[r][c];
    printf("\n");
//entering the matrix elements
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the %d element of %d row ",j+1,i+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    int i,j;
    int zr,zc;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(matrix[i][j]==0)
            {
                zr=i;
                zc=j;
            }
        }
    }

    for(int x=0;x<r;x++)
    {
        for(int y=0;y<c;y++)
        {
            if(x==zr || y==zc)
            printf("%d    ",0);
            else
            printf("%d    ",matrix[x][y]);
        }
        printf("\n");
    }
}