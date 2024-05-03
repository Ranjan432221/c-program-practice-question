#include<stdio.h>
void main()
{
    int i;
    int sum = 0;
    int count = 0;
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i;
        count++;
    }
    float avg = (float)sum/count;
    printf("sum = %d\n",sum);
    printf("avg = %.2f",avg);
}