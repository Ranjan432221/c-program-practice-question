//find out its farenheit to  temp celsius and temp celsius to farenheit
 #include <stdio.h>
int main()
{
    float c,f;
    printf("enter the value of temperature in celsius:");
    scanf("%f",&c);
    float farenheit = (9.0/5.0)*c+32;
    printf("\nfarenheit to temperature is:%.2f",farenheit);
    printf("\nenter the value of farenheit");
    scanf("%f",&f);
    float temp = (5.0/9.0)*(f-32);
    printf("temperature to farenheit is:%.2f",temp);
    return 0;
}