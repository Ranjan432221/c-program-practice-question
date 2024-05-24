#include<stdio.h>
void main()
{
    char name[30];
    printf("enter the name:");
   gets(name);
    printf("%.5s\n",name);
    printf("%10.5s",name);
    puts(name);
    puts(name);
}
//if u enter name:ranjan kumar sahoo, u will get 
//ranja
//       ranjaranjan kumar sahoo
//ranjan kumar sahoo