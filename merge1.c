#include<stdio.h>
void printarray(int arr[],int n)
{
    int i;
    for(i =0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
   printf("\n");
}
 void merge(int arr[],int mid,int low,int high)
{
    int i,j,k,b[100];
    i = low;
    j = mid+1;
    k = low;
    while(i<=mid&&j<=high)
    {
        if(arr[i]<arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
      while(i<=mid)
    {
        b[k] = arr[i];
        k++;
        i++;
    } 
    while(j<=high)
    {
        b[k]=arr[j];
        k++;
        j++;
    }
    for( int i=low;i<=high;i++)
    {
        arr[i] = b[i];
    }
}
void mergesort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}
int main()
{
    int arr[] ={ 14,9,24,3,5,58,47};
    int n = 6;
    printarray(arr,n);
    mergesort(arr,0,6);
    printarray(arr,n);
}