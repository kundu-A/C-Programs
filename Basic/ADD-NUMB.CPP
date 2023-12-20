#include<stdio.h>
#include<conio.h>
int sum=0;
void add(int);
void main()
{
  int n;
  clrscr();
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  add(n);
  getch();
}
void add(int n)
{
  if(n==1)
  printf("%d",sum+n);
  else
  {
    sum=sum+n;
    add(n-1);
  }
}
