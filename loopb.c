#include<stdio.h>
void main()
{
    int i,a,sum = 0;
    for(i=1;i<=10;i++)
    {
        printf("enter any number");
        scanf("%d",&a);
        if(a<0)
        {
          break;
        }
        sum+=i;
    }
    printf("sum is :%d",sum);
}

