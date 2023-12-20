#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    printf("  ");
    for(k=1;k<=n;k++)
    printf("* ");
    printf("\n");
  }
  getch();
}