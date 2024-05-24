#include<stdio.h>
void main()
{
    char name[30];
    printf("enter the name:");
    gets(name);
    printf("%.5s\n",name);
    printf("%10.5s",name);
    printf("\n");
    puts(name);
    puts(name);
}