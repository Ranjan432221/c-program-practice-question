#include<stdio.h>
void main()
{
    int a[2][2]={{1,2},{2,3}};
    int b[2][2]={{1,2},{3,4}};
    int c[2][2];
    int i,j,k;
    printf("first array is given below\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd array is given below\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("multiplication of a and b array is given below\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            sum = 0;
            for(k=0;k<=1;k++)
            {
                sum = sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}