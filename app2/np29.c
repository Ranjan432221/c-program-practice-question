#include<stdio.h>
void main()
{
    int i;
    int sum = 0;
    int count = 0;
    for(i=1;i<=301;i+=2)
    {
        sum= sum+i;
        count++;
    }
    float avg =(float)sum/count;
    printf("the sum of odd number within 1 to 301:%d\n",sum);
    printf("the avg of odd number within 1 to 301:%.2f\n",avg);

}