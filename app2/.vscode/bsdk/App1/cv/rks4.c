//find out area and perimeter of circle
#include<stdio.h>
void main()
{
    float area,radius;
    float pi = 3.141;
    printf("enter the radius of circle:");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("\narea of a circle is:%.2f",area);
    float perimeter = 2*pi*radius;
    printf("\nthe perimeter of circle is:%.2f",perimeter);
    return 0;
}