#include<stdio.h>
void main()
{
    //matrix 
    int a[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,1},{2,4,8,0}};
    //printing original
    for(int i=0; i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d    ",a[i][j]);
        }
        printf("\n");
    }
    //logic for rotating the matrix by 90 degree
    //transpose
    printf("transpose \n");
    int trans[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d    ",a[j][i]);
            trans[i][j]=a[j][i];
        }
        printf("\n");
    }
    printf("\n");
    printf("%d \n",sizeof(a)/sizeof(a[0]));
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d    ",trans[i][j]);
        }
        printf("\n");
    }
    
    //reverseing a matrix
    printf("\nreverse\n");
    for(int i=0;i<4;i++)
    {
        for(int j=3;j>=0;j--)
        {
            printf("%d    ",trans[i][j]);
        }
        printf("\n");
    }
    printf("%d \n",sizeof(a)/sizeof(a[0]));

}