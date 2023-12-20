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
    for(j=n-i;j>=1;j--)
    printf(" ");
    for(k=1;k<=i*2-1;k++)
    {
      if(k==1 || k==i*2-1 || i==n/2+1)
      printf("*");
      else
      printf(" ");
    }
    printf("\n");
  }
  getch();
}

