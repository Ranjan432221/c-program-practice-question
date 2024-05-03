#include<stdio.h>
void main()
{
    int i, n, a[200],b[200],c[200];
    printf("enter element up to which you want:");
    scanf("%d",&n);
    printf("enter %d element in first array one by one\n",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("enter %d element in 2nd array one by one\n",n);
     for(i=0;i<=n;i++)
     {
        scanf("%d",&b[i]);
     }
     printf("addition to first and second array in given below:");
     for(i=0;i<=n;i++)
     {
        c[i] = a[i] + b[i];
        printf("%d\n",c[i]);
     }
}