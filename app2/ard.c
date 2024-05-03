#include<stdio.h>
void main()
{
    int i,a[3][3]={{1,2,3},{3,4,5},{5,6,7}};
    int j;
    printf("elements of array is given below\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
}