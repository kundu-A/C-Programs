#include<stdio.h>
#include<conio.h>
int recadodd(int);
void main()
{
   int n,r;
   clrscr();
   printf("ENTER THE RANGE: ");
   scanf("%d",&n);
   r=recadodd(n);
   printf("%d",r);
   getch();
}
int recadodd(int n)
{
 static int sum=0;
  if(n==0)
  {
  return sum;
  }
  else
  {
      if(n%2!=0)
      {
      sum=sum+n;
      printf("%d ",n);
      }
    return recadodd(n-1);
  }
}

