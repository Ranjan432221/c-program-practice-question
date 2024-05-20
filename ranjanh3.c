#include<stdio.h>

void main();
{
    int i, numbers[10], largest;
    printf("\nenter 10 integers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&numbers[i]);
    }
    largest=a[0];
    for(i=0;i<10;i++)
    {
        if(numbers[i]>largest)
        largest = numbers[i];
    }
    printf("\n the largest number is:%d",largest);
}
// its show wrong but how to do right i dont know , next time itry to do something new//