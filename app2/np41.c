#include<stdio.h>
void main()
{
    int a,b,i;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    int sum = a + b;
    printf("sum = %d\n",sum);
    for(i=sum;i>=1;i--)
    {
        printf("%d ",i);
    }
}