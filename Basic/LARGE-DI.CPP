#include<stdio.h>
#include<conio.h>
void  main()
{
  int n,d,a=1;
  clrscr();
  printf("ENTER THE NUMBER:- ");
  scanf("%d",&n);
  while(n!=0)
  {
    d=n%10;
    if(d>a)
    a=d;
    n=n/10;
  }
  printf("%d",a);
  getch();
}
