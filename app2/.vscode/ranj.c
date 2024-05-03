#include<stdio.h>
void main()
{
    int i,n,j,temp;
    int a[100];
     printf("enter element which you print up to\n");
    scanf("%d",&n);
    printf("enter %d number one by one",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("array element in descending order\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}