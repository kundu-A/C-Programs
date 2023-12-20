#include<stdio.h>
#include<conio.h>
void main()
{
   int n=50,f,sum=0;
   clrscr();
   for(f=10;f<=n;f++)
   {
      if(f%2==0)
     {sum=sum+f;
      printf("%d ",f);
     }
   } printf("\nTHE SUM=%d",sum);
     getch();
}