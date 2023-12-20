#include<stdio.h>
#include<conio.h>
void main()
{
  int a=5,b=3,c=4,s;
  clrscr();
  s=b>a?b:b<c?(b>a?a:b):(a>b?a:b);
  printf("%d",s);
  getch();
}