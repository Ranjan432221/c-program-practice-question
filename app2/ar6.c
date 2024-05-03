#include<stdio.h>
void main()
{
    int i,n,a[200],sum=0;
    printf("enter element up to which you want:");
    scanf("%d",&n);
    printf("enter %d element one by one\n",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
    printf("total sum=%d",sum);
}