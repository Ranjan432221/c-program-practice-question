#include<stdio.h>
int main()
{
    int ar[6] = {5,7,9,10,14,15};
    int i;
    printf("elements in reversing order is given below:");
    for(i=5;i>=0;i--)
    {
       printf("%d\n",ar[i]);
    }
   return 0;
}