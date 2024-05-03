#include<stdio.h>
#include<string.h>
void main()
{
    char u[200] ="easy@gmail.com",p[200] = "12345";
    char u1[200],p1[200];
    printf("enter user name\n");
    scanf("%s",&u1);
    printf("enter password\n");
    scanf("%s",&p1);
    if(strcmp(u,u1)==0&&strcmp(p,p1)==0)
    {
        printf("login successful");
    }
    else
    {
        printf("wrong username or password"); 
    }
}