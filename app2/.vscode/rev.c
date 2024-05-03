#include<stdio.h>
void main()
{
    int a[100];
    int i,j,n;
    printf("enter elment up to which you want\n");
    scanf("%d",&n);
    printf("enter %d element one by one\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reversing order below\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
