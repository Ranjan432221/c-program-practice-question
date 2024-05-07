#include<stdlib.h>
#include<stdio.h>
int i= 0;
void main()
{
    printf("%d\n",++i);
    if(i==20)
    exit(0);
    main();
}