#include<stdio.h>
#include<string.h>
struct student//structure definition
{
    int regdNo;
    char name[30];
    float cgpa;

};
void main()
{
    struct student s;//structure declearation
    printf("\nenter the student\'s regdno,name,and cgpa:");
    scanf("%d %s %f",&s.regdno,&s.name,&s.cgpa);
    printf("enter students details\n------------------");
    printf("regd.no:%d\n name:%s\ncgpa:%f",s.regdno,s.name,s.cgpa);
}