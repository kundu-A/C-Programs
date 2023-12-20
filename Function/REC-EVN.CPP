#include<stdio.h>
#include<conio.h>
void recodd(int);
void main()
{
  int n;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  recodd(n);
  getch();
}
void recodd(int n)
{
  if(n==1)
  printf("%d ",n);
  else
  {
    recodd(n-1);
    if(n%2==0)
    printf("%d ",n);
  }
}
