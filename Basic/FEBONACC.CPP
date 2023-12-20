#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a=0,b=1,c,i;
  clrscr();
  printf("ENTER THE RANGE:- ");
  scanf("%d",&n);
  printf(" %d %d",a,b);
  for(i=2;i<n;i++)
  {
     c=a+b;
     printf(" %d ",c);
     a=b;
     b=c;
  }
  getch();
}