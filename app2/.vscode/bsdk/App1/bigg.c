#include<stdio.h>
void printoddnumber(int start,int end)
{
    if(start>end)
    {
        return;
    }
    printf("%d ",start);
    printoddnumber(start+2,end);
}
int main()
{
    int start=101;
    int end=499;
    printf("enter odd number between 100 and 500:");
    printoddnumber(start,end);
}