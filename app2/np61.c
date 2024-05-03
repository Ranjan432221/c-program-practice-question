#include<stdio.h>
void main()
{
    int i,a,b,m=1;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i+=1)
    {
        if(a%i==0&&b%i==0)
        {
            m=i;
        }
    }
    printf("hcf of %d and %d is %d",a,b,m);
}