#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n;
  clrscr();
  printf("ENTER THE RANGE:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if((j==n/2+1) || ((i>1 && i<n/2+1) && j==(n/2+1-i+1)) || ((j>1 && j<n) && i==n))
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
  getch();
}
