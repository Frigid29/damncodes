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
            printf("Enter the %d element of %d row ",j,i);
            scanf("%d",&matrix[i][j]);
        }
    }
//printing original matrix
    printf("\n Original:  \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d    ",matrix[i][j]);
        }
        printf("\n");
    }
   
   printf("\n Rotating matrix by 90 degree and printing it: \n");
    for(int i=0;i<c;i++)
    {
        for(int j=r-1;j>=0;j--)
        {
            printf("%d    ",matrix[j][i]);
        }
        printf("\n");
    }
}

