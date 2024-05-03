//write three numbers and finds smallest among them
# include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("the smallest number is:%d",a);
    }
    if(b<a && b<c)
    {
        printf("enter the smallest number is :%d",b);
    }
    if(c<a && c<b)
    {
        printf("enter the smallest number is:%d",c);
    }
    return 0;
}