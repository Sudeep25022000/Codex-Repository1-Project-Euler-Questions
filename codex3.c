#include <stdio.h>
#include<conio.h>
#include <math.h>
void main()
{
    long long num=600851475143;
    long long MaxPrime=-1;
    while(num%2==0)
    {
        MaxPrime=2;
        num>>=1;
    }

    int i;
    for (i=3;i<=sqrt(num);i=i+2)
    {
        while(num%i==0)
        {
            MaxPrime=i;
            num=num/i;
        }
    }

    if(num>2)
    {
        MaxPrime=num;
    }
    printf("%lld",MaxPrime);
    getch();
}


