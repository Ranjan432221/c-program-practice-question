#include<stdio.h>
void mian()
{
    int n,b,cpy,rev = 0;
    printf("enter any number which you want\n");
    scanf("%d",&n);
    cpy=n;
    while(n!=0)
     {
       b=n%10;
       rev=rev*10+b;
       n=n/10;
     }
     if(cpy==rev)
     printf("palindrome");
     else
     printf("not palindrome");
}
void main()
{
    int n,b,cpy,rev=0;
    printf("enter any elemnet which you want\n");
    scanf("%d",&n);
    cpy=n;
    while(n!=0)
    {
        b=n%10;
        rev= rev*10+b;
        n=n/10;
    }
    if(cpy==rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindome");
    }
}