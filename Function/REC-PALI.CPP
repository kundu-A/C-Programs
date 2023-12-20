#include<stdio.h>
#include<conio.h>
int palin(int);
int d=0;
int sum=0;
void main()
{
  int n,r;
  clrscr();
  printf("ENTER THE DIGIT: ");
  scanf("%d",&n);
  r=palin(n);
  if(r==n)
  printf("PALINDROME");
  else
  printf("NON-PALINDROME");
  getch();
}
int palin(int n)
{
  if(n==0)
  return sum;
  else
  {
    d=n%10;
    sum=sum*10+d;
    return palin(n/10);
  }
}
