#include<stdio.h>
void main()
{
    int marks;
    printf("\nenter the marks: ");
    scanf("%d",&marks);
    switch(marks/10)
    {
        case 9:
        printf("\nexcellent");
        break;
        case 8:
        printf("\nWith Honor");
        break;
        case 7:
        printf("\nFirst Division");
        break;
        case 6:
        printf("\nSecond Division");
        break;
        case 5:
        case 4:
        printf("\nThird Division");
        break;
        case 3:
        case 2:
        case 1:
        printf("\nfail");
        break;
        default:
        printf("Invalid Input");

    }
}