#include<stdio.h>
#include<conio.h>
void main()
{
   int count;
   int j=5;
   int check;

   for(count=3;count<=10001;)
   {
      for(check=3;check<=j;check=check+2)
      {
         if(j>5 && j%10==5)
            break;

         else if(j%check==0)
            break;
      }
      if(check==j)
      {
         if(count==10001)
         {
             printf("%d\n",j);
         }
         count++;
      }
      j=j+2;
   }

   getch();
}
