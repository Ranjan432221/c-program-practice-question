#include<stdio.h>
void main()
{
    int i,n,a[200];
    printf("enter any element which you want:");
    scanf("%d",&n);
    printf("enter %d element one by one:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\narray element is given below\n");
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n odd number given below\n");
     for(i=0;i<=n;i++)
     {
        if(a[i]%2!=0)
        printf("%d\n",a[i]);
     }
}