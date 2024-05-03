#include<stdio.h>
#include<string.h>
typedef struct student
{
    int id;
    char mean[30];
}std;
int main()
{
    std s1;
    s1.id = 20;
    printf("s1 id is:%d\n",s1.id);
    strcpy(s1.mean,"rahul");
    printf("s1 mean:%s\n",s1.mean);
    return 0;
}
