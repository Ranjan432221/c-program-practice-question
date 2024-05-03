#include<stdio.h>
int main()
{
    int h,b;
    int area;
    printf("enter the height and base of a triangle is:");
    scanf("%d%d",&h,&b);
    area = .5/b*h;
    printf("the area of a triangle is:%d\n",area);
    return 0;  
}