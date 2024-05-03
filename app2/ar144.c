#include<stdio.h>
void main()
{
    int i, n,a[100],b[100],c[100];
    printf("enter any element up to print :");
    scanf("%d",&n);
    printf("enter  %d integer in 1st array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("&d",&a[i]);
    }
    printf("enter %d integer in 2nd array element\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
        printf("after mergging the 3rd element below\n");
        for(i=0;i<n*2;i++)
        {
            if(i<n)
            {
                c[i]=a[i];
            }
            else
            c[i]=b[i-n];
            printf("%d",c[i]);
        }
}