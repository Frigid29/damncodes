#include<stdio.h>

struct student{
    char name[50];
    char id[50];
    char course[50];
    char branch[50];
    char year[50];
};

void main()
{
    struct student s1;
    struct student S2;
    printf("\nEnter the name of student 1: ");
    gets(s1.name);
    printf("\nEnter the id of student 1: ");
    gets(s1.id);
    printf("\nEnter the course of student 1: ");
    gets(s1.course);
    printf("\nEnter the branch of student 1: ");
    gets(s1.branch);
    printf("\nEnter the year of student 1: ");
    gets(s1.year);
     printf("\nEnter the name of student 2: ");
    gets(S2.name);
    printf("\nEnter the id of student 2: ");
    gets(S2.id);
    printf("\nEnter the course of student 2: ");
    gets(S2.course);
    printf("\nEnter the branch of student 2: ");
    gets(S2.branch);
    printf("\nEnter the year of student 2: ");
    gets(S2.year);
    printf("\n Student 1 info: \n");
    printf("\nName: %s",s1.name);
    printf("\nid: %s",s1.id);
    printf("\ncourse: %s",s1.course);
    printf("\nbranch: %s",s1.branch);
    printf("\nyear: %s",s1.year);
    printf("\n Student 2 info: \n");
    printf("\nName: %s",S2.name);
    printf("\nid: %s",S2.id);
    printf("\ncourse: %s",S2.course);
    printf("\nbranch: %s",S2.branch);
    printf("\nyear: %s",S2.year);
}