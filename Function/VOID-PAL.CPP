#include<stdio.h>
#include<conio.h>
void palin(int,int);
int sum=0;
void main()
{
  int n,s;
  clrscr();
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  s=n;
  palin(n,s);
  getch();
}
void palin(int n,int s)
{
  int d=0;
  if(n==0)
  {
    if(s==sum)
    printf("THIS NUMBER IS PALINDROME NUMBER");
    else
    printf("THIS NUMBER IS NOT A PALINDROME NUMBER");
  }
  else
  {
    d=n%10;
    sum=sum*10+d;
    palin(n/10,s);
  }
}