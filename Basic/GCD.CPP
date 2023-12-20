#include<stdio.h>
#include<conio.h>
void main()
{
  int n,n1,t,d;
  clrscr();
  printf("ENTER 2 NUMBERS: ");
  scanf("%d%d",&n,&n1);
  if(n<n1)
  {
  t=n;
  n=n1;
  n1=t;
  }
  while(d!=0)
  {
    d=n%n1;
    n=n1;
    n1=d;
  }
    printf("%d",n);
  getch();
}
