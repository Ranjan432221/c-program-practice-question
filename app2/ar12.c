#include<stdio.h>
void main()
{
    int i,n, a[100];
    printf("enter any element up to which you want:");
    scanf("%d",&n);
    printf("enetr %d element one by one\n",n);
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    max = a[0];
    for(i=0;i<=n;i++)
    {
        if(min>a[i])
        min = a[i];
    }
    printf("minimum value=%d",min);
}