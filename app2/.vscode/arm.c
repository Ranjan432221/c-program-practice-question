#include<stdio.h>
void main()
{
    int n,c,i,arm =0;
    printf("enter any element which you want\n");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        i = n%10;
        arm = (i*i*i)+arm;
        n = n/10;
    }
    if(c==arm)
    printf("armstrong");
    else
    printf("not armstrong");
}