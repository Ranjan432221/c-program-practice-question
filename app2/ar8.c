#include<stdio.h>
void main()
{
    int i, n, a[200];
    printf("enter element up to whic you want:");
    scanf("%d",&n);
    printf("enter %d element one by one\n",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elemet is givem below\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\neven number given below: ");
    for(i=0;i<=n;i++)
    {
        if(a[i]%2==0)
        printf("%d\n",a[i]);
    }
}