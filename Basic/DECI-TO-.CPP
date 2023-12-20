#include<stdio.h>
#include<conio.h>
void decibi(int);
void main()
{
  int n;
  clrscr();
  printf("ENTER THE DECIMAL NUMBER: ");
  scanf("%d",&n);
  decibi(n);
  getch();
}
void decibi(int n)
{
  int s=0;
  if(n==0)
  printf("%d ",s);
  else
  {
    s=n%2;
    decibi(n/2);
    printf("%d ",s);
  }
}
