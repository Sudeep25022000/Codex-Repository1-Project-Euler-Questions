#include<stdio.h>
#include<conio.h>
void main()
{
    int r;
    int sum=0;
    int temp;
    int product;
    int big=0;
    int i;
    int j;    
    for(i=100;i<=999;i++)
    {
        for(j=i;j<=999;j++)
        {   sum=0;
            product=0;
            product=i*j;
            temp=product;

            while(temp!=0)
            {
                r=temp%10;
                sum=(sum*10)+r;
                temp=temp/10;
            }
            if((product==sum)&&(big<product))
                {
                    big=product;
                }            
        }
    }
    printf("%u",big);
    getch();
}
