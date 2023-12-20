#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k;
  clrscr();
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<i;j++)
    printf("   ");
    for(k=i;k<=n;k++)
    printf(" * ");
    printf("\n");
  }
  getch();
}