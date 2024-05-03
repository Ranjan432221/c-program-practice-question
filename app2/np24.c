#include<stdio.h>
void main()
{
    char ch;
    printf("enter the any alphabet:");
    scanf("%c",&ch);
    switch (ch)
    {
    case'a':
    case'A':
    case'e':
    case'E':
    case'i':
    case'I':
    case'o':
    case'O':
    case'u':
    case'U':
    printf("vowel");
    break;
    default:
    printf("consonant\n");
    }
}