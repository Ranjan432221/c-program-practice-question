#include<stdio.h>
void main()
{
    int i,n,j,a[100];
    int sum=0;
    float avg;
    printf("enter any elemnt which up to want to print\n");
    scanf("%d",&n);
    printf("element %d number\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg = (float)sum/n;
    }
    printf("sum:%d\n ",sum);
    printf("average:%.2f",avg);
}