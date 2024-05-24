#include<stdio.h>
int sum(int a, int b)
{
    sum = a+b;
    return sum;
}
int main()
{
    int a,b,c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printf("the sum is:%d\n",c);
    return 0;
}
