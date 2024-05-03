#include<stdio.h>
void main()
{
    int i;
    int f =1,n;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f = f*i;
    }
    printf("factorial = %d\n",f);//repeat of factorial coding by me
}