#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j;
  clrscr();
  printf("ENTER THE RANGE :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n/2+1;j++)
    {
      if((i==1 && j==1) || (i==n && j==1) || (i==n && j==n/2+1))
      printf("   ");
      else if(i==1 || j==1 || i==n || ((i>=n/2+1 && i<=n) && j==n/2+1) || (i==n/2+1 && (j>(n/2+1)/2 && j<n/2+1)))
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
  getch();
}