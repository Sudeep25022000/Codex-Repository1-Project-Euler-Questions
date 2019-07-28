#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    int j;
    int k;
    int flag;
    for(i=0;i<1000/2;i++)
    {
        for(j=i+1;j<1000/2;j++)
        {
            for(k=j+1;k<1000/2;k++)
            {
                if((i*i)+(j*j)==(k*k) && (i+j+k==1000))
                {
                    int product=i*j*k;
                    printf("%d, %d, %d\n",i,j,k);
                    printf("\n%d",product);
                }
            }
        }
    }


    if(flag==1)
    {
        printf("%d, %d, %d",i,j,k);
    }
    getch();
}

