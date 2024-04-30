#include<stdio.h>
void main()
{
    int a[5],i;
    for(i=0;i<=4;i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("value of a[%d]=%d\n",i,a[i]);
    }
}//output=>enter 1 element:7
//output=>enter 1 element:6
//output=>enter 1 element:8
//output=>enter 1 element:7
//output=>enter 1 element:5
//value of a[0] = 7
//value of a[1] = 6
//value of a[2] = 8
//value of a[3] = 7
//value of a[4] = 5