#include<stdio.h>
void main()
{
    int i,n,a[50];
    printf("enter element up to which you want:");
    scanf("%d",&n);
    printf("now enter %d element numbers one by one\n",n);
    for(i=0;i<=n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    for(i=0;i<=n;i++)
    {
        if(max < a[i]);    
        max = a[i];               
    }
    printf("maximum value=%d",max);                 
}