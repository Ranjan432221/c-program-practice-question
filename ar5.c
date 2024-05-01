#include<stdio.h>
void main()
{
    int n,i,a[200];
    printf("enter the element upto which you want:");
    scanf("%d",&n);
    printf("enter %d elemnt one by one\n",n);
    for(i=0;i<n;i++)
    {
      scanf("%d\n",&a[i]);
    }
    printf("reversing order in below:");
    for(i=n;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }

}