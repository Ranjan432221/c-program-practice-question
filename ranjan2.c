#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[10],sum = 0;
    float avg;
    printf("\n enter 10 integers");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
        for(i=0;i<10;i++)
        sum = sum+a[i];
        avg = (float)sum/10;  
        printf("sum of 10 integers:%d",sum);
        printf("\n avg of 10 integers:%.2f",avg);
        
        getch ();
}