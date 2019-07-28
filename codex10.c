#include<stdio.h>
#include<conio.h>
void main()
{
    int low;
    int i;
    int flag;
    long long sum=0;
    for(low=2;low<2000000;low++)
    {
        flag=0;
        for(i=2;i<=sqrt(low);i++)
        {
            if(low%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            {
                sum=sum+low;

            }

    }
    printf("\n\n\n%lld",sum);
    getch();
}
