#include<stdio.h>
void main()
{
    int a[100],n,j,i;
    int temp;
    printf("enter elemet which up to print\n");
    scanf("%d",n);
    printf("below are element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i],a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("araay element descending order below\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}