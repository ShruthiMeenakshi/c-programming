#include<stdio.h>
void main()
{
    float f,c;
    printf("Fahrenheit degree= ");
    scanf("%f",&f);
    c=(f-32)*(5.0/9.0);
    printf("\nThe Celsius value is %0.2f",c);
}
