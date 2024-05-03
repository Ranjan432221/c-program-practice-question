#include<stdio.h>
#include<string.h>
void main()
{
    char ch[30] = "ranjan is a good boy";
    printf("%s",ch);
    puts(ch);
    printf("%.5s",ch);
    printf("%10.5s\n",ch);
    puts(ch);
    puts(ch);
    char name[40];
    printf("enter name:");
    scanf("%s",name);
    printf("%s",name);
    gets(name);
    puts(name);
    printf("%d\n",strlen(ch));
    printf("%s",strupr(ch));

}