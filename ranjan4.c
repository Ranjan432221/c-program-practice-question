#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[3][3],j;
    printf("enter 3 integer");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter a 3*3 transposed of matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%-5d",a[i][j]);
        }
        printf("\n\n");
    }
    getch ();
}