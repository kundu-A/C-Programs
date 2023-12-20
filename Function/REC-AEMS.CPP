#include<stdio.h>
#include<conio.h>
int armstrng(int);
void main()
{
  int n,r;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  r=armstrng(n);
  printf("%d",r);
  getch();
}
int armstrng(int n)
{
  static int c=0;
  if(n!=0)
  {
  c=c+1;
  return armstrng(n/10);
  }
  else
  {
    return c;
  }
}