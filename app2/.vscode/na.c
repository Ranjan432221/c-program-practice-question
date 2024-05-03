#include<stdio.h>
void main()
{
    char s[59];
    int i,vow =0;
    printf("enter text\n");
    gets(s);
    for(i=0;i<strln(s);i++)
    {
        if(s[i]=='A'||s[i]=='a'||s[i]=='e'||s[i]=='E'||s[i]=='I'||s[i]=='i'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
      {
        vow++;
      }
    }
    printf("\number of vowels :%d",vow);

}