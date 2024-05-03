#include<stdio.h>
void main()
{
    float a,b,c;
    printf("enter three angle:");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b+c)==180)
    {
        printf("its a triangle");
    }
    else
    {
        printf("its not a triangle");
    }
}