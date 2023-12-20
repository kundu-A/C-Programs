#include<stdio.h>
#include<conio.h>
void main()
{
  int n,d=0,eve=-1,i;
  clrscr();
  printf("ENTER THE NUMBER:-  ");
  scanf("%d",&n);
  if(n>999 && n<10000)
  {
   while(n!=0)
   {
    d=n%10;
    if(d%2==0)
    {
     if(d>eve)
     eve=d;
    }
    n=n/10;
   }
   for(i=0;i<eve;i++)
   printf("%d",eve);
  }
  getch();
}