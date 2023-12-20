#include<stdio.h>
#include<conio.h>
void main()
{
  int a=5,b;
  clrscr();
  b=a++ + ++a + ++a + a++ + --a + a--;
  printf("%d\n",a);
  printf("%d",b);
  getch();
}
