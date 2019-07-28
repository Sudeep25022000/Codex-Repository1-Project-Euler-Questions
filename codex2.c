#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int t1=1;
    int t2=1;
    int nextTerm;
    int sum=0;
    while(nextTerm<4000000)
        {
            nextTerm=t1+t2;
            t1=t2;
            t2=nextTerm;

                if(t1%2==0)
                {
                    sum=sum+t1;
                }
        }


    printf("Sum: %u",sum);

}
