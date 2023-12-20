#include<stdio.h>
#include<conio.h>
int factral(int);
int p=1;
void main()
{
  int n,r;
  clrscr();
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  r=factral(n);
  printf("THE FACTORIAL OF %d IS %d",n,r);
  getch();
}
int factral(int n)
{
  if(n==0)
  return p;
  else
  {
    p=p*n;
    return factral(n-1);
  }
}
