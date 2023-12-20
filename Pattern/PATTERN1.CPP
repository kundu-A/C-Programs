#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n;
  clrscr();
  printf("ENTER THE VALUE:-");
  scanf("%d",&n);
  clrscr();
  for(i=0;i<n;i++)
  {
    if(i<(n-1))
    printf("*");
    else
    if(i==(n-1))
    {
      for(j=0;j<n;j++)
      printf("*");
    }
    printf("\n");
  }
  getch();
}