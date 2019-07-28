#include<stdio.h>
#include<conio.h>
void main()
{
   int i;
   int j=3;
   int count;

   for (i=2;i<=10001;)
   {
      for (count=2;count<=j-1;count++)
      {
         if(j%count==0)
            break;
      }
      if (count==j)
      {
         if(i==10001)
         {printf("%d\n",j);}
         i++;
      }
      j++;
   }

   getch();
}
