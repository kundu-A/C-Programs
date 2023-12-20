#include<stdio.h>
#include<conio.h>
int decibi(int);
void main()
{
  int n,r;
  clrscr();
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  r=decibi(n);
  printf("%d",r);
  getch();
}
int decibi(int n)
{
  int s=0;
  if(n==0)
  return 0;
  else
  {
    decibi(n/2);
    s=s%2;
    return s;
  }
}
