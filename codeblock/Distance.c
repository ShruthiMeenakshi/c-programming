#include<stdio.h>
void main()
{
    float m,ft,inch,cm,km;
    printf("Distance between two cities=",km);
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("\n Distance in meters= %0.2f",m);
    printf("\n Distance in centimeters= %0.2f",cm);
    printf("\n Distance in inches= %0.2f",inch);
    printf("\n Distance in feet= %0.2f",ft);
}

