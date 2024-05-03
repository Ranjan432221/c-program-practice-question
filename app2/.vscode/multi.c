#include<stdio.h>
void main()
{
    int a[200][200];
    int b[200][200];
    int c[200][200];
    int i,j,k,n,sum=0;
    printf("enter up to print element:");
    scanf("%d",&n);
    printf("enter the 3*3 matrix 1st:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",a[i][j]);
        }
         printf("\n");
    }
    printf("enter the 2nd array 3*3 matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
         printf("\n");
    }
    printf("3rd matrix of 3*3 matrix in below:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          sum = 0;
          for(k=0;k<n;k++)  
          {
            sum = sum + a[i][k]*b[k][j];
          }  
          c[i][j]=sum;
          printf("%d",c[i][j]);
        }
    }
    printf("\n");

}