#include<stdio.h>
void main()
{
    int month,days;
    printf("enter the value of days:");
  scanf("%d",&days);
  month = days/30;
  days = days%30;
  printf("\n month = %d\ndays = %d",month,days);
}
//program convert day to month & days