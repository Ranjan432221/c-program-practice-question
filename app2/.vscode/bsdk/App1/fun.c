#include<stdio.h>
void avg(int x,int y,int z)
{
    float avg;
    avg = (x+y+z)/3;
    printf("%.2f",avg);
}
int main()
{
    int a,b,c;
    printf("enter three number");
    scanf("%d%d%d",&a,&b,&c);
    avg(a,b,c);
    return 0;
}