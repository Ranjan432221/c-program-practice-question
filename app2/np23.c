#include<stdio.h>
void main()
{
    int a,b,sum,sub,mul,div;
    char ch;
     printf("enter charcter:");
    scanf("%c",&ch);
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case'+':
        sum= a+b;
        printf("sum = %d\n",sum);
        break;
        case'-':
        sub = a-b;
        printf("sub = %d\n",sub);
        break;
        case'*':
        mul = a*b;
        printf("mul = %d\n",mul);
        break;
        case'/':
        div = a/b;
        printf("div = %d\n",div);
        break;
        default:
        printf("its wrong");
    }
}