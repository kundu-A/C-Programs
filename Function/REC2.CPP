#include<stdio.h>
#include<conio.h>
int rec(int);
void main()
{
  int n,r;
  clrscr();
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  rec(n);
  //printf("%d ",r);
  getch();
}
int rec(int n)
{
  if(n==0)
  return n;
  else
  {
    printf("%d ",n);
    rec(n-1);
  }
}

