#include<stdio.h>
int main(){
    int x=12;
    int *pointer=&x;
    int **y=pointer;
    printf("%d\n",x);
    printf("%d\n",*pointer);
 printf("%d\n",**y);
 printf("%d\n",&x);
 printf("%d\n",p);
    
    return 0;
}