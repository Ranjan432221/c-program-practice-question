#include<stdio.h>
int main()
{
    int j = 10;
    while(j>=0)
    {
        if(j==5)
        {
            j--;
            continue;
        }
        printf("%d\n",j);
        j--;
    }
    return 0;
     
}