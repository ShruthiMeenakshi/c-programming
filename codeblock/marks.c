#include<stdio.h>
void main()
{
    int p1,s1,s2,s3,s4,s5,sum,avg,per;
    char name[20];
    printf("Enter name ");
    scanf("%s",&name);
    printf("\n Enter all 5 subject marks");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    avg=sum/5;
    per=sum/5; /*when total marks is 100*/
    printf("Your Name: %s ",name);
    printf("Your Aggregate marks= %d ",avg);
    printf("Your percentage marks= %d %",per);
}
