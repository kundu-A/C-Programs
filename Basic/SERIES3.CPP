#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,a=1;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d/%d, ",a,i);
  }
  getch();
}