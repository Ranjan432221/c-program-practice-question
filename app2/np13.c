#include<stdio.h>
void main()
{
    float p;
    printf("enter the percentage :");
    scanf("%f",&p);
    if(p<100&&p>=60)
    {
        printf("1st division");
    }
    else if(p<60&&p>=45)
    {
        printf("2nd division");
    }
    else if(p<45&&p>=33)
    {
        printf("3rd division");
    }
    else
    {
        printf("all are fail\n");
    }
}