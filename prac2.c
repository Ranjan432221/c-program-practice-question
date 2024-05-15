#include<stdio.h>
void main()
{
    char name[30];
    printf("enter the name:");
    scanf("%s",name);
    printf("%s",name);
    //if u ttype any name it is only print out "name" before 1st space ,ex-write-ranjan kumar sahoo,its output only "ranjan"//
    //cause here input "scanf" doesnt take space bet^n name,//
}