#include<stdio.h>
void main()
{
    char ch;
    printf("enter Grade:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        printf("mark within 100 to 80");
        break;
        case 'b':
        printf("mark within 60 to 79");
        break;
        case 'c':
        printf("mark within 59 to 45");
        break;
        default:
        printf("fail");
    }

}
   