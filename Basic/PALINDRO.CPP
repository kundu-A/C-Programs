#include<stdio.h>
#include<conio.h>
void main()
{
  int n,d,p=0,m;
  clrscr();
  printf("ENTER THE NUMBER:-  ");
  scanf("%d",&n);
  m=n;
  while(n!=0)
  {
   d=n%10;
   p=p*10+d;
   n=n/10;
  }
  if(m==p)
  printf("PALINDROM");
  else
  printf("NON-PALINDROM");
  getch();
}