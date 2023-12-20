#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    for(j=n-i;j>=1;j--)
    {
      printf(" %d ",j);
    }
    printf("\n");
  }
  getch();
}