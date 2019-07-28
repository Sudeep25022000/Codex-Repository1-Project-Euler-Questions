#include<stdio.h>
#include<conio.h>
void main()
{
    int num=100;
    int sumofsquare;
    int squareofsum;
    int difference;

		sumofsquare=(num*(num+1)*(2*num+1))/6;
		squareofsum=(num*(num+1))/2;
		squareofsum*=squareofsum;
		difference=(sumofsquare-squareofsum);
		if(difference<0)
        {
            printf("%d",-difference);
        }

		else
        {
            printf("%d",difference);
        }
    getch();
}
