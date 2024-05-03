#include<stdio.h>
void main()
    {
        int i;
        int n,sum = 0;
        printf("enter any number:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            sum = sum+i;
        }
        printf("sum = %d\n",sum);
    }
        
    
