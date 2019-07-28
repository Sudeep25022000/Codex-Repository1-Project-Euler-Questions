#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int num1,num2;
    int sum1=0,sum2=0;
    int difference;
    for(i=1;i<=100;i++)
    {
        num1=i*i;
        sum1=sum1+num1;
        num1=0;
    }

    for(i=1;i<=100;i++)
    {
        sum2=sum2+i;
    }
    num2=sum2*sum2;

    difference= num2-sum1;
    printf("%u",difference);


    getch();
}
