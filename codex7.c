#include<stdio.h>
#include<conio.h>
void main()
{
   int count;
   int j=3;
   int check;

   for(count=2;count<=10001;)
   {
      for(check=3;check<=j;check=check+2)//avoiding the check of odd number during iteration
      {
         if(j%check==0)
            break;
      }
      if (check==j)
      {
         if(count==10001)
         {printf("%d\n",j);}
         count++;
      }
      j++;
   }

   getch();
}
