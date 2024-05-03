#include<stdio.h>
void main()
{
    int i;
    int sum = 0;
    for(i=1;i<=200;i++)
    {
        sum = sum + i;
        //eithr we can write here sum+=i;
    }
    printf("the sum of number from 1 to 200 is:%d\n",sum);
}