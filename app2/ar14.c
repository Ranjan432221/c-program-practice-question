#include<stdio.h>
void main()
{
    int i,n,a[200],b[200],c[200]; 
    printf("enter any element which up to print");
    scanf("%d",&n);
    printf("now enter %d integer value for array\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("now enter %d element in 2nd array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("after merging third array is given below\n");
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