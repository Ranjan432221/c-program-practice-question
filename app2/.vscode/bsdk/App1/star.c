#include<stdio.h>
void printoddnumber(int start,int end)
{
    if(start>end)
    return;
  if(start%2!=0)
 {
  printf("%d",start);
 }
}
 int start,end;
int main()
{
    printf("odd number between 100 and 500",start,end);
    printoddnumber(100,500);
}