#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("it is vowel ");
    }
    else
    {
        printf("it is consonant");
    }
}