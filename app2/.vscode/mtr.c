#include<stdio.h>
void main()
{
    int a[3][3]={{1,2,4},{4,5,6},{6,8,3}};
    int i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
        }
          printf("\n");
    }
    printf("transpose of matrix below\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
  