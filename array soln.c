//write a program to find aphabate,digit ,special character in c programming
#include<stdio.h>
#include<string.h>
void main()
{
  int alpha = 0,digit=0,space=0,special=0,i;
  char s[500];
  printf("enter any text\n:");
  gets(s);
  for(i=0;s[i]!='\0';i++)
  {
    if((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))
        {
            alpha++;
        }
    else if(s[i]>=48&&s[i]<=57)
        {
            digit++;
        }
    // else if(s[i]== " ")
    //    {
    //      space++;
    //    }
       else
       {
         special++;
       }
  }  
  printf("alpha:%d\ndigit:%d\nspecial:%d\nspace:%d",alpha,digit,special,space);

}