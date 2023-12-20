#include<stdio.h>
#include<conio.h>
int armstrng(int,int);
int sum=0;
void main()
{
  int n,r,c=0,s;
  clrscr();
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  s=n;
  while(n)
  {
    c=c+1;
    n=n/10;
  }
  r=armstrng(s,c);
  if(r==s)
  printf("THIS NUMBER IS ARMSTRONG");
  else
  printf("THIS NUMBER IS NON-ARMSTRONG");
  getch();
}
int armstrng(int n,int c)
{
  int d=0,p=1,i;
  if(n==0)
  return sum;
  else
  {
    d=n%10;
    for(i=0;i<c;i++)
    {
    p=p*d;
    }
    sum=sum+p;
    return armstrng(n/10,c);
  }
}