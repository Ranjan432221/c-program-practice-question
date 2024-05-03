#include<stdio.h>
#include<string.h>
struct student
{
  char name[200];
  int rollno;
  float marks;
};
void main()
{
    struct student s1,s2;
    s1.rollno = 1;
    s2.rollno = 2;
    s1.marks = 455;
    s2.marks = 360;
    strcpy(s1.name,"ranjan");
    strcpy(s2.name,"rahul");
    printf("name = %s\n",s1.name);
    printf("name = %s\n",s2.name);
    printf("rollno = %d\n %d",s1.rollno,s2.rollno);
    printf("mark = %f\n%f",s1.marks,s2.marks);
}