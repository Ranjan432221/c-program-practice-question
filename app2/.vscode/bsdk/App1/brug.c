#include<stdio.h>
void printoddnumber(int n)
{
    if(n>=100)
    {
        if(n%2!=0)
        {
            printf("%d ",n);
        }
        printoddnumber(n-1);
    }
}
int main()
{
    printf("print odd number decreasing order bet 100 and 500::");
    printoddnumber(500);
    return 0;
}