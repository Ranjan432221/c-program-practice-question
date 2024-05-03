#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t,n;
    printf("enter the principal:");
    scanf("%f",&p);
    printf("enter the no of years:");
    scanf("%f",&t);
    printf("enter the rate of interest:");
    scanf("%f",&r);
    printf("no of time interest applied oer year:");
    scanf("%f",&n);
    float si = (p*t*r)/100;
    printf("simple interest is:%.2f\n",si);
    float ci = p*pow((1+r/n),(n*t));
    printf("compound interest is :%.2f\n",ci);
}