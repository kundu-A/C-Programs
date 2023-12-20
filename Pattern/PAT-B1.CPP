#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2;j++)
    {
      if(j==1 || j==n/2 || i==1 || i==n/2 || i==n)
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
  getch();
}