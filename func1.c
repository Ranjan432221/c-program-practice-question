#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap(int*,int*);
 void main()
{
   int a = 5, b = 7;
    printf("\nbefore swapping a=%d, b = %d",a,b);
    swap(&a,&b);
    printf("after swapping a = %d,b = %d",a,b);
}