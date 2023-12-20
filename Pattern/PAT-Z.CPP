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
    for(j=1;j<=n;j++)
    {
      if(i==n || i==1 || j==n-i+1)
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
  getch();
}