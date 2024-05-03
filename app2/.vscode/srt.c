#include<stdio.h>
void main()
{
    int i,j,temp,n;
    char a[200];
    printf("enter any element which up to print\n:");
    scanf("%d",&n);
    printf("below element s are arranging:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("elements are descending order in below:\n");
    for(i=0;i<=n;i++)
    printf("%d",a[i]);
}