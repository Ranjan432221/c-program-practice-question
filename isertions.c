#include<stdio.h>
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void insertion(int a[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
             j = j-1;
        }
        a[j+1] = key;
    }
}
int main()
{
    //-1  0   1   2   3   4   5
    //    12,|54,65,  07,23,  09-->i=1, key=54, j=0; 
    int a[]={12,54,65,7,23,9};
    int n= sizeof(a)/sizeof(a[0]);
    printarray(a,n);
    insertion(a,n);
    printarray(a,n); 
}