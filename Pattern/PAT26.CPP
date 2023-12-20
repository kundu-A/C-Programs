#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=65;i<n+65;i++)
  printf("%c ",i);
  printf("\n");
  for(j=1;j<=n-1;j++)
  {
    for(k=65;k<=n-1-j+65;k++)
    {
      if(k==65 || k==n-1-j+65)
      printf("%c ",k);
      else
      printf("  ");
    }
    printf("\n");
  }
  getch();
}
