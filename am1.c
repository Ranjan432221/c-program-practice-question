#include<stdio.h>
void main()
{
    int i,a[200];
    int n;
    int sum = 0;
    printf("enter how much number u want to print:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
     printf("sum :%d",sum); 
}