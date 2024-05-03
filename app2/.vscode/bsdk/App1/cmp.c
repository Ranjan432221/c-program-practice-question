#include<stdio.h>
struct complexnumber
{
    float real;
    float imaginary;
};
struct complexnumber addcomplexnumber(struct complexnumber num1,struct complexnumber num2)
{
    struct complexnumber sum;
    sum.real=num1.real+num2.real;
    sum.imaginary=num1.imaginary+num2.imaginary;
    return sum;
}
int main()
{
    struct complexnumber num1,num2;
    printf("enter 1st real and imaginary number",num1.real,num1.imaginary);
    scanf("%f%f",&num1.real,&num1.imaginary);
    printf("enter 2nd real and imaginary number",num2.real,num2.imaginary);
    scanf("%f%f",&num2.real,&num2.imaginary);
    struct complexnumber sum=addcomplexnumber(num1,num2);
    printf("\n%.2f+%.2fi\n",sum.real,sum.imaginary);
    return 0;
}