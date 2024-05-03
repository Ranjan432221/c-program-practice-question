#include<stdio.h>
void main()
{
    int i,a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    for(i=1;;i+=1)
    {
        if(i%a==0&&i%b==0)
        {
            printf("lcm of %d and %d is %d",a,b,i);
            break;
        }
    }
}