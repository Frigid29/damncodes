#include<stdio.h>

void main()
{
    int r1,r2,c1,c2;
    printf("\nOrder of matrix A: ");
    printf("\nrows: ");
    scanf("%d",&r1);
    printf("columns: ");
    scanf("%d",&c1);
    printf("\nOrder of matrix B: ");
    printf("\nrows: ");
    scanf("%d",&r2);
    printf("columns: ");
    scanf("%d",&c2);
    int a[r1][c1];
    int b[r2][c2];
    if(c1==r2)
    {
        printf("\n Enter the values of matrix A: \n");
        for(int i=0; i<r1 ;i++)
        {
            for(int j=0; j<c1; j++)
            {
                printf("enter the %d value of %d row elemnt:  ",j,i);
                scanf("%d",&a[i][j]);
            }
        }

        printf("\n Enter the values of matrix B: \n");
        for(int i=0; i<r2 ;i++)
        {
            for(int j=0; j<c2; j++)
            {
                printf("enter the %d value of %d row elemnt:  ",j,i);
                scanf("%d",&b[i][j]);
            }
        }
    }
    printf("\nmatrix A: \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        
            printf("%d     ",a[i][j]);
        
        printf("\n");
    }
    printf("\nmatrix B: \n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d     ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n matrix multiplication(A*B): \n");
    int sum=0;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            for (int k = 0; k < c1; ++k) 
            {
                sum+= a[i][k] * b[k][j];
            }

            printf("%d    ",sum);
            sum=0;
        }
        printf("\n");
    }
}