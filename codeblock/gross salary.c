#include<stdio.h>
void main()
{
    float bs,da,hra,gs;
    printf("enter your basic salary: ");
    scanf("%f",&bs);
    da=bs*0.4;
    hra=bs*0.2;
    gs=hra+bs+da;
    printf("\n Basic salary= %0.2f",bs);
    printf("\nHouse rent Allowance= %0.2f",hra);
    printf("\nDearness  Allowance= %0.2f",da);
    printf("\nGross salary= %0.2f",gs);
}
