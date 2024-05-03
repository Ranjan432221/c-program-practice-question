#include<stdio.h>
void main()
{
    int i,n,a[4]={10,20,30,40};
    int b[4];
    printf("first array is given below\n");
    for(i=0;i<=4;i++)
    {
        printf("%d",a[i]);
        b[i]=a[i];
    }
       printf("after copy second array is given below\n");
         for(i=0;i<=4;i++)
        {
         printf("%d",a[i]);
        }
    
}