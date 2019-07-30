#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int j;
    int k;
    int count=2;
    for(i=1;count<10001;i++)
    {
        if(isprime((6*i)-1)==0)
        {
            k=(6*i)-1;
            count++;
        }
        if(isprime((6*i)+1)==0 && count<10001)
        {
            k=(6*i)+1;
            count++;
        }
    }
    printf("%d",k);
}

int isprime(int a)
{int i;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
            return 1;
        else
            ;

    }return 0;
}
