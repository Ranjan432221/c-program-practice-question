#include<stdio.h>
void main()
{
    int n,b,rev=0,cpy;
    printf("enter any element :");
    scanf("%d",&n);
    cpy = n;
    while(n!=0)
    {
        b=n%10;
        rev =rev*10+b;
        n=n/10;
    }
    if(cpy==rev)
    printf("palindrome");
    else
    printf("not palindrome");
}