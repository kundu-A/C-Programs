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
    for(j=1;j<=n/2+1;j++)
    {
      if((i==1 && j==n/2+1) || (i==n/2+1 && j==n/2+1) || (i==n && j==n/2+1))
      printf(" ");
      else if (j==1 || j==n/2+1 || i==n/2+1 || i==1 || i==n)
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
  getch();
}
