#include<stdio.h>
void main()
{
    char s[200],i;
    printf("enter any string:\n");
    gets(s);
    int length;
    for(i=1;s[i]!='\0';i++)
    {
        length++;
    }
    printf("%d",length);
}