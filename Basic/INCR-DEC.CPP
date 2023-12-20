#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("ENTER 1'ST NUMBER: ");
  scanf("%d",&a);
  printf("ENTER 2'ND NUMBER: ");
  scanf("%d",&b);
  c=a++ + --b- a++ +b;
  printf("%d",c);
  getch();
}