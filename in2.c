#include<stdio.h>
void printarray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void insertion(int arr[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
int main()
{
   int arr[] = {23,6,45,9,7};
   int n = 5;
   printarray(arr,n);
   insertion(arr,n);
   printarray(arr,n);
}