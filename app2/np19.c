#include<stdio.h>
void main()
{
    float sp,cp,profit,loss;
    printf("enter cp:");
    scanf("%f",&cp);
    printf("enetr sp:");
    scanf("%f",&sp);
    if(sp>cp)
    {
        profit = sp-cp;
        printf("profit is:%f",profit);
    }
    else
    {
        loss = cp-sp;
        printf("loss is :%f",loss);
    }
}