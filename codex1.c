#include<stdio.h>
#include<conio.h>
void main()
{
    int r=1000;
    int i;
    int sum=0;
    for(i=1;i<r;i++)
    {
        if(i%3==0 || i%5==0)
        {

            sum=sum+i;
        }
    }
    printf("Sum:%d",sum);

}
