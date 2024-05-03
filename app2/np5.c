#include<stdio.h>
void main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age<25)
    {
        printf("\neligible for vote\n");
        printf("\nalso admitted\n");
    }
    printf("not eligible for vote");
  
}