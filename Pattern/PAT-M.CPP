#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j;
  clrscr();
  printf("ENTER THE RANGE IN ODD NUMBER TO CHECK PROPERLY ");
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(j==1 || j==n || ((i>1 && i<=n/2) && i==j) || ((i>1 && i<=n/2) && j==(n-i+1)) || (i==n/2+1 && j==n/2+1))
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
  getch();
}