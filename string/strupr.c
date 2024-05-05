#include<stdio.h>
#include<string.h>
int main()
{
    char s[40] = "easy";
    char name[40] = "ranjan kumar sahoo";
    printf("%s", strupr(name));
    printf("\n");
    printf("%s",strupr(s));
    return 0;
}