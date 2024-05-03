#include<stdio.h>
int main()
{
    int f,s;
    printf("enter the value of two number is:");
    scanf("%d%d",&f,&s);
    if(f>s)
    {
        printf("the largest number is:%d",f);
    }
    if(f<s)
    {
        printf("the largest number is:%d",s);
    }
    if(f==s)
    {
        printf("both numbers are equal");
    }
    return 0;
}