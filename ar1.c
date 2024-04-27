//it is just take input and give output ofone dimensional array
#include<stdio.h>
void main()
{
  int a[3],i;
  printf("enter element 1:");
  scanf("%d",&a[0]);
  printf("enter element 2:");
  scanf("%d",&a[1]);
  printf("eneter element 3:");
  scanf("%d",&a[2]);
  for(i=0;i<=2;i++)  
  {
    printf("value at a[%d]=%d\n",i,a[i]);
  }
}