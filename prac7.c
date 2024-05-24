#include<stdio.h>
float average(int x,int y,int z)
{
    float avg;
    avg = (x+y+z)/3;
    return avg;
}
float average(int x,int y,int z);
void main()
{
    int a,b,c;
    float avg;
    printf("enter three no:");
    scanf("%d%d%d",&a,&b,&c);
    avg = average(a,b,c);
    printf("the avearage is:%.2f",avg);
}
