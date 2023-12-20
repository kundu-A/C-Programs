#include<stdio.h>
#include<conio.h>
void armstrng(int,int,int);
int sum=0;
void main()
{
  int n,s,c=0,r;
  clrscr();
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  s=n;
  r=s;
  while(n)
  {
    c=c+1;
    n=n/10;
  }
  armstrng(s,c,r);
  getch();
}
void armstrng(int s,int c,int r)
{
  int d=0,p=1,i;
  if(s==0)
  {
    if(r==sum)
    printf("THIS NUMBER IS A ARMSTRONG NUMBER");
    else
    printf("THIS NUMBER IS A NON-ARMSTRONG NUMBER");
  }
  else
  {
    d=s%10;
    for(i=0;i<c;i++)
    p=p*d;
    sum=sum+p;
    armstrng(s/10,c,r);
  }
}